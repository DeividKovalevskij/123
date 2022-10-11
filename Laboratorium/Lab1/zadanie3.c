/*
Deivid Kovalevskij. Student
* -----------------
 Obliczyc funkcja y = ax^2 znaczenia, gdy a - stale, x jest wybierany z tablicy X(n)
* -----------------
2022-10-11
*/

#include <math.h>
#include <stdio.h>

void main(void) {
  int n;
  printf("Podaj dlugosc tablicy: ");
  scanf("%d", &n);

  double a, x[n];

  printf("Podaj a: ");
  scanf("%lf", &a);
  for(int i = 0; i < n; i++) {
    printf("Podaj x%d: ", i+1);
    scanf("%lf", &x[i]);
  }
  for(int i = 0; i < n; i++) {
    printf("%.1lf = %.1lf * %1.lf ^ 2\n", (a*x[i]*x[i]), a, x[i]);
  }
}
