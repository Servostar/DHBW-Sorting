#include "../arrays.h"
#include "../sort.h"

void selection(int *arr, int len) {
  for (int x = 0; x < len - 1; x++) {
    int e = x;

    for (int y = x + 1; y < len; y++)
      if (arr[y] < arr[e])
        e = y;

    swap(arr + e, arr + x);
  }
}
