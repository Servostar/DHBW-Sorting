#include "../arrays.h"
#include "../sort.h"

void bozo(int *arr, int len) {
  while(!is_sorted(arr, len)) {
    int x = rand() % len;
    int y = rand() % len;

    swap(arr + x, arr + y);
  }
}
