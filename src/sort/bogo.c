#include "../arrays.h"
#include "../sort.h"

void bogo(int *arr, int len) {
  while(!is_sorted(arr, len)) {
    shuffle(arr, len);
  }
}
