#include <stdio.h>

int bubbleSort(int *array, int size) {
  for (int i = 0; i < size - 1; i++) {
    for (int j = size - 1; j > i; j--) {
      if (prior(array, j, j - 1)) {
        swap(array, j, j - 1);
      }
    }
  }
}
