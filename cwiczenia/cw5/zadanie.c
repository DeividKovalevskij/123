//Deivid Kovalevskij. Student

#include <errno.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  FILE *fptr;

  fptr = fopen("random.dat", "w");

  int i = 0;
  srand((unsigned)time(NULL));

  if (fptr != NULL) {
    printf("File created successfully!\n");
  } else {
    printf("Failed to create the file.\n");
    return -1;
  }

  int lic = 1000; // maksymalna liczba
  int n = 100;    // ilosc liczb
  int j;
  while (i < n) {
    if ((rand() % 3) == 0) {
      j = (rand() % lic) - lic;
    } else {
      j = (rand() % lic);
    }
    printf("%d \n", j);
    fprintf(fptr, "%d\n", j);
    i = i + 1;
  }
  fclose(fptr);
  return 0;
}
