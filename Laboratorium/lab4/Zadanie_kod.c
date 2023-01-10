//Deivid Kovalevskij. Student

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int Liczba(int n, int a);

int Fibo(int n);

float Aryt(float pier, float krok, float n);

float Geom(float pier, float drug, float n);

int Pascal(int row, int column);

void main(void) {

  printf("a = %d\n", Liczba(8193, 0));

  printf("liczba Finaciego = %d\n", Fibo(7));

  printf("ciag arytmetyczny = %.2f\n", Aryt(10, 2.6, 15));

  printf("ciag geometryczny = %.2f\n", Geom(2, 4, 11));
  
  printf("liczba pascala = %d\n", Pascal(10, 5));
  
  return;
}

int Liczba(int n, int a) {
  if (pow(2, a - 1) <= n && n < pow(2, a)) {
    return a;
  } else
    return Liczba(n, a + 1);
}

int Fibo(int n) {
  if (n == 0)
    return 0;
  else if (n == 1)
    return 1;
  else
    return (Fibo(n - 1) + Fibo(n - 2));
}

float Aryt(float pier, float krok, float n) {
  if (n > 1) {
    return Aryt(pier + krok, krok, n - 1);
  } else {
    return pier;
  }
}

float Geom(float pier, float drug, float n) {
  if (n > 1) {
    float q = drug / pier;
    return Geom(drug, drug * q, n - 1);
  } else {
    return pier;
  }
}

int Pascal(int row, int column) {
  if (column == 0)
    return 0;
  else if (row == 1 && column == 1)
    return 1;
  else if (column > row)
    return 0;
  else
    return (Pascal(row - 1, column - 1) + Pascal(row - 1, column));
}
