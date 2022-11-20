#include "../arrays.h"
#include "../sort.h"

void gnome(int *arr, int len) {
  
  for (int x = 1; x < len; x++) {
    if (arr[x] < arr[x - 1]) {
      swap(arr + x, arr + x - 1);
      x -= 2;
    }
  }
}
