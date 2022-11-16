
#include "arrays.h"
#include "bench.h"
#include "sort.h"
#include <stdlib.h>

int main()
{
  const int LEN = 10;

  int* arr = (int*) malloc(sizeof(int) * LEN);

  populate(arr, LEN);

  benchmark_sort(bubble, "bubble-sort", arr, LEN);

  free(arr);

  return 0;
}
