#include <stdio.h>

int insertionSort(int *array, int size) {
  for (int i = 0; i < size; i++) {
    for (int j = i; j > 0 && prior(array, j, j - 1); j--) {
      swap(array, j, j - 1);
    }
  }
}
