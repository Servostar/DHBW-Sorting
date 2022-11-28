#include "../arrays.h"
#include "../sort.h"

void merge(int *arr, int len) {
  if (len < 2)
    return;

  int m = len / 2;

  merge(arr, m);
  merge(arr + m, len - m);
 
  int s1 = 0;
  int s2 = m + 1;

  if (arr[m] <= arr[s2])
    return;
  
  while (s1 <= m && s2 < len) {
    if (arr[s1] <= arr[s2])
      s1 ++;
    else {
      int v = arr[s2];
      
      for(int i = s2; i > s1; i--) {
        arr[i] = arr[i - 1];
      }
      
      arr[s1] = v;

      s1 ++;
      m ++;
      s2 ++;
    }
  }
}
