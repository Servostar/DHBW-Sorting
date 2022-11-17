#include "arrays.h"
#include "bench.h"
#include "sort.h"
#include <stdlib.h>
#include <time.h>

int main() {
  const int LEN = 10000;

  int *arr = (int *)malloc(sizeof(int) * LEN);

  populate(arr, LEN);
  srand(time(NULL));

  benchmark_sort(bubble, "bubble-sort", arr, LEN);
  benchmark_sort(selection, "selection-sort", arr, LEN);
  benchmark_sort(insertion, "insertion-sort", arr, LEN);
  benchmark_sort(quick, "quick-sort", arr, LEN);
  benchmark_sort(merge, "merge-sort", arr, LEN);

  //print_array(arr, LEN);

  free(arr);

  return 0;
}
