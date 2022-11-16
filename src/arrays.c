#include "arrays.h"
#include <stdio.h>

void print_array(int *arr, int len) {
  for (int x = 0; x < len; x++) {
    printf("%s%d", x == 0 ? "" : ", ", arr[x]);
  }
  printf("\n");
}

void populate(int *arr, int len) {
  for (int x = 0; x < len; x++) {
    arr[x] = x + 1;
  }
}

void shuffle(int *arr, int len) {
  for (int x = 0; x < len; x++) {
    int y = rand() % len;

    swap(arr + x, arr + y);
  }
}

void swap(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}

bool is_sorted(int *arr, int len) {
  int last = 0;
  for (int x = 0; x < len; x++) {
    if (last > arr[x]) {
      return false;
    }
    last = arr[x];
  }
  return true;
}
