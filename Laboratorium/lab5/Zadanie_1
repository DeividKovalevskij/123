// Deivid Kovalevskij. Student

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int binarySearch(int *array, int key, int length) {
  int lowIndex = 0, highIndex = length;
  while (lowIndex < highIndex) {
    int midIndex = floor((lowIndex + highIndex) / 2);
    if (array[midIndex] == key) {
      return midIndex;
    } else if (key > array[midIndex]) {
      lowIndex = midIndex;
    } else {
      highIndex = midIndex;
    }
  }

  return -1;
}

int binarySearchRecursion(int *array, int start, int end, int index, int key) {
  if (start > end) {
    index = 0;
  } else {
    int midIndex = floor((start + end) / 2);
    if (array[midIndex] < key) {
      binarySearchRecursion(array, midIndex + 1, end, index, key);
    } else if (key > array[midIndex]) {
      binarySearchRecursion(array, start, midIndex - 1, index, key);
    } else {
      index = midIndex;
    }
  }
  return -1;
}

int main() {

  int start = 0, end = MAX_LINE_LENGTH;
  int key = 70405;
  FILE *fptr;
  int number, i = 0, arr[MAX_LINE_LENGTH];
  fptr = fopen("Dane.dat", "r");
  if (fptr != NULL) {
    printf("File opened successfully!\n");
  } else {
    printf("Failed to read the file.\n");
    return -1;
  }

  while (fscanf(fptr, "%d", &number) == 1) {
    arr[i] = number;
    i++;
  }
  fclose(fptr);
  printf("Indeks tej liczby jest: %d\n",
         binarySearch(arr, key, MAX_LINE_LENGTH));
  printf("Czasami on dobrze pisze: %d\n",
         binarySearchRecursion(arr, start, end, MAX_LINE_LENGTH, key));

  return 0;
}
