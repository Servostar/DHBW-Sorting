#include "../arrays.h"
#include "../sort.h"

void merge(int *arr, int len) {
  if (len < 2)
    return;

  int m = len / 2;

  merge(arr, m);
  merge(arr + m, len - m);

  shell(arr, len); 
}
