#ifndef _BENCH_H_
#define _BENCH_H_

#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include <time.h>

typedef enum Cases { Best, Average, Worst } Case;

typedef void(sort)(int *, int);

typedef struct Sort {
  const char *name;
  sort *algorithm;
} Sort;

long long benchmark_sort(sort, const char *, int *, int, Case _case);

void benchmark(const Sort *, int len, int *, int);

#endif
