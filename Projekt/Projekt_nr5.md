# Algorytm wyznaczania najmniejszej wspólnej wielokrotności.

### -Pseudokod dla algorytmu LCM:

```
unction lcm(a, b)
 return (a * b) / gcd(a, b)
end function
function gcd(a, b)
 if b is 0
 return a
 else
 return gcd(b, a mod b)
 end if
end function
```

### -Realizacja w C dla algorytmu LCM

```
#include <stdio.h>
#include <stdlib.h>
int gcd(int a, int b) {
 if (b == 0) return a;
 return gcd(b, a % b);
}
int lcm(int a, int b) {
 return (a * b) / gcd(a, b);
}
int main(void) {
 int a, b;
 printf("Wpisz pierwsza liczba: ");
 scanf("%d", &a);
 printf("Wpisz druga liczba: ");
 scanf("%d", &b);
 printf("LCM z %d and %d jest %d\n", a, b, lcm(a, b));
 return 0;
}
```
| Liczby  | 50 i 20 | 100 i 251 | 499 i 12 | 1523 i 12 |
| ------- | ------- | --------- | -------- | --------- |
| Odp     |  100    |   25100   |   5988   |   18276   |

Ten kod pobiera od użytkownika dwie liczby całkowite i oblicza ich LCM za pomocą funkcji lcm. Funkcja 
lcm oblicza LCM, najpierw znajdując największy wspólny dzielnik (NWD) dwóch liczb za pomocą funkcji 
gcd, a następnie dzieląc iloczyn tych dwóch liczb przez NWD.
Przykładowym zastosowaniem algorytmu LCM jest znalezienie najmniejszej wielokrotności dwóch liczb, 
które są podzielne przez obie z nich. Na przykład LCM 15 i 20 to 60, więc 60 to najmniejsza 
wielokrotność 15 i 20, która jest podzielna przez 15 i 20.

# Algorytm zliczania wyrazów.
### - Pseudokod dla algorytmu liczenia słów:

```
function wordCount(str)
 count = 0
 word = 0
 for i = 0 to str.length
 if str[i] is not a space and word is false
 count = count + 1
 word = true
 else if str[i] is a space
 word = false
 end if
 end for
 return count
end function
```
### -Realizacja w C dla algorytmu liczenia słów:

```
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
```
| String  | Deivid Kovalevskij | Uniwersytet w Bialymstoku | Algorytm zliczania wyrazow w C|
| ------- | ------- | --------- | -------- |
| Ilosc Stringu     |  2    |   3   |   5   |

Ten kod pobiera ciąg jako dane wejściowe od użytkownika i używa funkcji ‘wordCount’ do zliczenia liczby 
słów w ciągu. Funkcja ‘wordCount’ iteruje po łańcuchu i śledzi liczbę słów za pomocą zmiennej ‘count’. 
Jeśli napotkany zostanie znak inny niż spacja, a flaga ‘word’ nie jest ustawiona, to ‘count’ jest zwiększany 
i ustawiana jest flaga ‘word’. W przypadku napotkania znaku spacji flaga ‘word’ jest resetowana

# Algorytm przechodzenia przez listę dwukierunkową
### - Pseudokod dla algorytmu przechodzenia:
```
rocedure traverse_list(list)
 current_node = list.head
 while current_node != NULL
 process(current_node)
 current_node = current_node.next
 end while
end proced
```

### -Realizacja w C dla algorytmu przechodzenia:

```
#include <stdio.h>
#include <stdlib.h>
struct node {
 int data;
 struct node *next;
 struct node *prev;
};
struct node* head = NULL;
void insert_node(int data) {
 struct node* new_node = (struct node*) malloc(sizeof(struct node));
 new_node->data = data;
 new_node->next = head;
 new_node->prev = NULL;
 if (head != NULL) {
 head->prev = new_node;
 }
 head = new_node;
}
void traverse_list() {
 struct node* temp = head;
 while (temp != NULL) {
 printf("%d ", temp->data);
 temp = temp->next;
 }
}
int main() {
 insert_node(10);
 insert_node(15);
 insert_node(19);
 insert_node(20);
 traverse_list();
 return 0;
}

```

| insert_node  | 10 | 15 | 19 | 20 |
| ------- | ------- | --------- | -------- | --------- |
| Odp     |  20    |   19   |   15   |   10   |

Algorytm ten odwiedza każdy węzeł na liście, rozpoczynając od węzła głównego, podążając za kolejnymi 
wskaźnikami i przetwarzając dane w każdym węźle, aż do końca listy. Złożoność czasowa tego algorytmu 
również wynosi O(n). Przykładem zastosowania tego algorytmu jest sytuacja, w której trzeba 
przetworzyć lub wydrukować elementy na liście podwójnie połączonej w kolejności, w jakiej pojawiają 
się na liście.
