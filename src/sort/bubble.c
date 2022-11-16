#include "../arrays.h"
#include "../sort.h"

// always shift the biggest element up to the right
void bubble(int *arr, int len) {

  for (int x = 0; x < len - 1; x++)

    for (int y = 0; y < len - x - 1; y++)
      if (arr[y] > arr[y + 1])
        // current element is bigger, shift to the right
        swap(arr + y, arr + y + 1);
}
