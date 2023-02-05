#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX_WORDS 1000
int wordCount(char *str) {
 int i = 0, count = 0;
 int word = 0;
 while (str[i]) {
 if (!isspace(str[i]) && !word) {
 word = 1;
 count++;
 }
 else if (isspace(str[i])) {
 word = 0;
 }
 i++;
 }
return count;
}
int main(void) {
 char str[MAX_WORDS];
 printf("Wpisz string: ");
 fgets(str, MAX_WORDS, stdin);
 printf("Liczba słów w srtingu jest: %d\n", wordCount(str));
 return 0;
}
