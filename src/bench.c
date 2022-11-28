#include "bench.h"
#include "arrays.h"
#include <stdio.h>

long long millis();

long long benchmark_sort(void (*algorithm)(int *, int), const char *name,
                         int *arr, int len, Case _case) {

#ifdef VISUALIZE
  init(arr, len, name);
#endif

  // take start time
  long long start = millis();

  switch (_case) {
  case Best:
    populate(arr, len);
    break;
  case Average:
    shuffle(arr, len);
    break;
  case Worst:
    gen_worst(arr, len);
    break;
  }

  // run algorithm
  algorithm(arr, len);

  if (!is_sorted(arr, len)) {
    printf("Algorithm %s didn't pass test", name);
    exit(-1);
  }

  // take end time and compute difference as passed time
  long long delta = millis() - start;

  return delta;
}

long long millis() {
  // stores current time
  struct timespec now;
  // get unix timestap
  timespec_get(&now, TIME_UTC);

  long long millis = 0;

  // convert seconds to millis and sum
  millis += ((long long)now.tv_sec) * 1000;
  // convert nanos to millis and sum
  millis += ((long long)now.tv_nsec) / 1000000;

  return millis;
}

void col_adjust(const char *str, int col_width) {
  printf("%s", str);

  int left = col_width - strlen(str);

  for (int k = 0; k < left; k++) {
    printf(" ");
  }

  printf("|");
}

void publish(const Sort *sorts, long long *data, int len) {
  printf("+--------------+---------+---------+---------+\n");
  printf("| Algorithm    | Best(ms)| Avg(ms) |Worst(ms)|\n");
  printf("+--------------+---------+---------+---------+\n");

  for (int i = 0; i < len; i++) {
    printf("| ");
    col_adjust(sorts[i].name, 13);

    char buf[9] = {' '};
    sprintf(buf, "% lld", data[i * 3]);
    col_adjust(buf, 9);

    sprintf(buf, "% lld", data[i * 3 + 1]);
    col_adjust(buf, 9);

    sprintf(buf, "% lld", data[i * 3 + 2]);
    col_adjust(buf, 9);
    printf("\n");
  }
  printf("+--------------+---------+---------+---------+\n");
}

void benchmark(const Sort *sorts, int len, int *arr, int arr_len) {

  long long *data = (long long *)malloc(sizeof(long long) * len * 3);

  for (int i = 0; i < len; i++) {
    data[i * 3] =
        benchmark_sort(sorts[i].algorithm, sorts[i].name, arr, arr_len, Best);
  }

  for (int i = 0; i < len; i++) {
    data[i * 3 + 1] = benchmark_sort(sorts[i].algorithm, sorts[i].name, arr,
                                     arr_len, Average);
  }

  for (int i = 0; i < len; i++) {
    data[i * 3 + 2] =
        benchmark_sort(sorts[i].algorithm, sorts[i].name, arr, arr_len, Worst);
  }

  publish(sorts, data, len);

  free(data);
}
