#include <stdio.h>

int main() {
    int n, binary = 0, max_consecutive_ones = 0, current_consecutive_ones = 0;

    printf("Podaj liczbę całkowitą w systemie dziesiętnym: ");
    scanf("%d", &n); // dane wejsciowe

    // Konwersja na binarny system liczbowy
    int i = 1;
    while (n > 0) {
        binary += (n % 2) * i;
        n /= 2;
        i *= 10;
    }

    // Znajdowanie maksymalnej liczby kolejnych cyfr 1 w reprezentacji binarnej
    while (binary > 0) {
        if (binary % 2 == 1) {
            current_consecutive_ones++;
            if (current_consecutive_ones > max_consecutive_ones) {
                max_consecutive_ones = current_consecutive_ones;
            }
        } else {
            current_consecutive_ones = 0;
        }
        binary /= 2;
    }

    printf("Maksymalna liczba kolejnych cyfr 1 w reprezentacji binarnej to: %d\n", max_consecutive_ones); // dane wyjsciowe 

    return 0;
}
