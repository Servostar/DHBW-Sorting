#include "../arrays.h"
#include "../sort.h"

void bubble(int* arr, int len) {
  
  for (int x = 0; x < len - 1; x++) {

    for (int y = x; y < len; y++) {
      if (arr[y] > arr[y + 1]) {
        swap(arr + y, arr + y + 1);
      }
    }
  }
}
