#include "arrays.h"
#include "bench.h"
#include "sort.h"
#include <stdlib.h>
#include <time.h>

const int LEN = 10000;

const Sort TESTS[] = {
    {"bubble", bubble},       {"gnome", gnome}, {"selection", selection},
    {"quick", quick},         {"merge", merge}, {"shell", shell},
    {"insertion", insertion}, {"radix", radix},
};

int main() {

  int *arr = (int *)malloc(sizeof(int) * LEN);

  populate(arr, LEN);
  srand(time(NULL));

  benchmark(TESTS, sizeof(TESTS) / sizeof(Sort), arr, LEN);

  free(arr);

  return 0;
}
