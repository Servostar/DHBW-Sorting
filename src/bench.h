#ifndef _BENCH_H_
#define _BENCH_H_

#include <stdbool.h>
#include <stdio.h>
#include <time.h>

void benchmark_sort(void (*algorithm)(int *, int), const char *name, int *,
                    int);

#endif
