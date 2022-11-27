#include "../arrays.h"
#include "../sort.h"

void shell(int *arr, int len) {

  for (int x = len / 2; x > 0; x /= 2) {

    for (int y = x; y < len; y++) {
      int t = arr[y];

      int i = y;
      for (; i >= x && arr[i - x] > t; i -= x) {
        arr[i] = arr[i - x];
        swap(arr + i, arr + i - x);
      }
      arr[i] = t;
    }
  }
}
