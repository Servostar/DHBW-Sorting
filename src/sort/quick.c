#include "../arrays.h"
#include "../sort.h"

void quick(int *arr, int len) {
  if (len < 1)
    return;

  int pivot = arr[len - 1];

  int x = -1;
  for (int y = 0; y < len - 1; y++) {
    if (arr[y] < pivot) {
      x ++;
      swap(arr + x, arr + y);
    }
  }
  
  x++;
  swap(arr + x, arr + len - 1);

  quick(arr, x);
  quick(arr + x + 1, len - x - 1);
}
