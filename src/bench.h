#ifndef _BENCH_H_
#define _BENCH_H_

#include <stdbool.h>
#include <stdio.h>
#include <time.h>

typedef void(sort)(int*,int);

void benchmark_sort(sort, const char *, int *,int);

#endif
