# Algorytmy i sturktury dannych, 1.c

/*
Deivid Kovalevskij. Student
* -----------------
 Laboratorium 1. Zadanie 1.
 Obliczyc funkcja y = ax^2 znaczenia, gdy a ir x zmeniajan sie jednoczesnie: a z 1 krokiem 
 0.5, x - z 2 do 6 krokiem 2
* -----------------
2022-10-11
*/

#include <stdio.h>

int main(void) {
  float a=1;
  float x=2;
  float y;

  while (x<7) {
    y = a*x*x;
    printf("%f, %f, %f\n", y, a, x);
    a +=0.5;
    x +=2;
  }
return 0;
}
