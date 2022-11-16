#include "bench.h"
#include "arrays.h"

long long millis();

void benchmark_sort(void (*algorithm)(int *, int), const char *name, int *arr,
                    int len) {
  // take start time
  long long start = millis();

  shuffle(arr, len);

  // run algorithm
  algorithm(arr, len);

  // take end time and compute difference as passed time
  long long delta = millis() - start;

  bool sorted = is_sorted(arr, len);

  const char *status = sorted ? "✔️" : "❌";

  printf("%s %s took: %lldms\n", status, name, delta);
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
