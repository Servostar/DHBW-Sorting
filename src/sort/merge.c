#include "../arrays.h"
#include "../sort.h"

void merge(int *arr, int len) {

  if (len <= 1)
    return;

  int mid = len / 2;

  merge(arr, mid);
  merge(arr + mid, len - mid);

  int s1 = 0;
  int s2 = mid + 1;

  shell(arr, len);
}
