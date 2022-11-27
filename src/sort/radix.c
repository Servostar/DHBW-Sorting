#include "../arrays.h"
#include "../sort.h"

void radix(int *arr, int len) {

  int *tmp = (int *)malloc(len * sizeof(int));

  for (int i = 0; i < len; i++) {
    int v = arr[i];

    tmp[v] = v;
  }

  for (int i = 0; i < len; i++) {
    arr[i] = tmp[i];
  }

  free(tmp);
}
