// Deivid Kovalevskij. Student
// Tablica
// 2022-10-25

#include <stdio.h>
#include <time.h>

int find(float item, float *arr);

void insert(float item, int pos, float *arr);

int size(float *arr);

float findMax(float *arr);

float findMin(float *arr);

void printTable(float *arr);

void main(void) {
  float arr[100] = {4.1,5.1,9.5,8.7,7.5,4.0};
  // realizacja

  int pozycja = find(4.1, arr);
  printf("Pozycja: %d\n", pozycja);
  float max = findMax(arr);
  printf("Maksimum: %f\n", max);
  float min = findMin(arr);
  printf("Minimum: %f\n", min);
  printTable(arr);
  
  return;
}

// Funkcji

int find(float item, float *arr){
  for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++){
    if(item == arr[i]){
      return i;
    }
  }
  return -1;
}

void insert(float item, int pos, float *arr){
  arr[pos] = item;
}

int size(float *arr){
  int i = (sizeof(arr)/sizeof(arr[0]));
  printf("\n%d",i);
  return i;
}

float findMax(float *arr){
  float max = arr[0];
  for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++){
    if(max < arr[i]){
      max = arr[i];
    }
  }
  return max;
}

float findMin(float *arr){
  float min = arr[0];
  for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++){
    if(min > arr[i]){
      min = arr[i];
    }
  }
  return min;
}

void printTable(float *arr){
  for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++){
    printf(" %.2f ", arr[i]);
  }
}
