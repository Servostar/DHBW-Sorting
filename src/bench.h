#ifndef _BENCH_H_
#define _BENCH_H_

#include <stdio.h>
#include <stdbool.h>
#include <time.h>

// return the passed millis in unix time
long long millis();

void benchmark_sort(void (*algorithm)(int*,int), const char* name, int*,int);

#endif
