// Deivid Kovalevskij. Student
// Tablica
// 2022-10-25

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define arr_size 100

int find(int item, int *arr);

void insert(int item, int pos, int *arr);

void remove2(int pos, int *arr);

int size();

int findMax(int *arr);

int findMin(int *arr);

void printTable(int *arr);

void main(void) {
  int arr[arr_size];
  // realizacja

  srand(time(NULL)); // use current time as seed for random generator
  for (int i = 0; i < size(); i++) {
    arr[i] = rand() % 100;
    printf("%d ", arr[i]);
  }
  return;
}

// Funkcii

int size() {
    return arr_size;
 }

int find(int item, int *arr) {
  printf("%d", size());
  if (size(arr) > 0) {
    for (int i = 0; i < size(arr); i++) {
      printf("%d\n", arr[i]);
      if (arr[i] == item) {
        return 1;
      }
    }
  }
  return 0;
}

void insert(int item, int pos, int *arr) { 
    int tmp_arr[size() + 1];
    int j=0;
    for (int i = 0; i < size()+1; i++) {
    if (i != pos) {
      tmp_arr[i] = arr[j];
      j++;
    } else {

      tmp_arr[i] = item;
      
    }
  }
  *arr = *tmp_arr; 
  }

void remove2(int pos, int *arr) {
  int tmp_arr[size() - 1];
  for (int i = 1; i < size(); i++) {
    if (i != pos) {
      tmp_arr[i] = arr[i];
    } else {
      i++;
      tmp_arr[i--] = arr[i];
    }
  }
  *arr = *tmp_arr;
}

int findMax(int *arr) {
  int max = arr[0];
  for (int i = 0; i < size(arr); i++) {
    if (max < arr[i]) {
      max = arr[i];
    }
  }
  return max;
}

int findMin(int *arr) {
  int min = arr[0];
  for (int i = 0; i < size(); i++) {
    if (min > arr[i]) {
      min = arr[i];
    }
  }
  return min;
}

void printTable(int *arr) {
  printf("\nPrint array \n------ \n");
  for (int i = 0; i < size(); i++) {
    printf(" %d \n", arr[i]);
  }
  printf("------\n");
}
