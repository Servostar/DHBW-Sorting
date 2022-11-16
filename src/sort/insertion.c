#include "../arrays.h"
#include "../sort.h"

void insertion(int *arr, int len) {
  for (int x = 1; x < len; x++) {
    int c = arr[x];

    for (int y = x - 1; y >= 0; y--) {
      if (arr[y] > c) {
        swap(arr + y, arr + y + 1);
      } else {
        arr[y + 1] = c;
        break;
      }
    }
  }
}
