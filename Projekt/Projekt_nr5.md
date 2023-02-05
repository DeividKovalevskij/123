## Praca wykonał Deivid Kovalevskij
## Projekt do przedmiotu "Algorytmy i struktury danych"
## Data 2023-02-05

# Algorytm wyznaczania najmniejszej wspólnej wielokrotności.

### -Pseudokod dla algorytmu NWW:

```
funkcja nww(liczby[])
    nww ← liczby[0]
    dla i od 1 do długość liczb[]:
        nww ← (nww * liczby[i]) / nwd(nww, liczby[i])
    zwróć nww

funkcja nwd(a, b)
    dopóki b ≠ 0
        t ← b
        b ← a mod b
        a ← t
    zwróć a

```
## Udowodnienie, że algorytm jest końcowy
Algorytm wyznaczania najmniejszej wspólnej wielokrotności jest końcowy, ponieważ jego proces obliczania opiera się na dzieleniu i mnożeniu liczb naturalnych, a te są ograniczone. W każdym kroku algorytmu wartość najmniejszej wspólnej wielokrotności jest obliczana poprzez podzielenie i mnożenie dwóch liczb naturalnych, co zawsze prowadzi do innej liczby naturalnej. W rezultacie proces ten zawsze zakończy się po finitnej liczbie kroków i otrzymamy ostateczną wartość najmniejszej wspólnej wielokrotności.

## Definicja Algorytmu wyznaczania najmniejszej wspólnej wielokrotności:
Algorytm wyznaczania najmniejszej wspólnej wielokrotności to procedura pozwalająca na znalezienie najmniejszej liczby, która jest wielokrotnością dwóch lub więcej liczb.

## Złożoność czasowa:
Algorytm wyznaczania najmniejszej wspólnej wielokrotności ma złożoność obliczeniową O(n), gdzie n jest liczbą liczb, dla których obliczana jest najmniejsza wspólna wielokrotność.

## Przykład użycia:
Załóżmy, że zarządzasz projektem, który polega na koordynowaniu pracy kilku zespołów. Każdy zespół ma inny harmonogram pracy i musisz ustalić taki harmonogram, który pozwoli wszystkim zespołom pracować razem bez żadnych konfliktów.

Jednym ze sposobów rozwiązania tego problemu jest użycie algorytmu LCM. Możesz użyć LCM, aby określić najmniejszą wspólną wielokrotność harmonogramów każdego zespołu, która reprezentuje najmniejszy przedział czasu, w którym wszystkie zespoły będą dostępne do wspólnej pracy.

Załóżmy na przykład, że Zespół 1 pracuje co 2 dni, Zespół 2 co 3 dni, a Zespół 3 co 4 dni. Aby znaleźć LCM tych harmonogramów, możesz wykonać następujące czynności:

    Wypisz czynniki pierwsze każdego rozkładu:
        Drużyna 1: 2
        Drużyna 2: 3
        Drużyna 3: 2, 2

    Oblicz maksymalny wykładnik każdego czynnika pierwszego:
        2:2 (występuje w drużynie 3)
        3:1 (występuje w Drużynie 2)

    Pomnóż czynniki pierwsze podniesione do ich maksymalnych wykładników, aby uzyskać NWW:
        NWW = 2^2 * 3 = 12

Oznacza to, że wszystkie zespoły będą dostępne do wspólnej pracy co 12 dni. Możesz użyć tych informacji do stworzenia wspólnego harmonogramu dla wszystkich zespołów, który pozwoli uniknąć konfliktów i zapewni, że wszyscy będą dostępni do wspólnej pracy w razie potrzeby.

### -Realizacja w C dla algorytmu NWW

```
---Link do kodu---
```
### Jake dane na wejsciu w algorytm, jakie na wyjsciu:
| Wejscie  | 50 i 20 | 100 i 251 | 499 i 12 | 1523 i 12 |
| ------- | ------- | --------- | -------- | --------- |
| Wyjscie     |  100    |   25100   |   5988   |   18276   |

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

## Udowodnienie, że Algorytm zliczania wyrazów jest końcowy
Dowód na to, że algorytm liczenia słów kończy się (lub kończy), można przedstawić za pomocą indukcji matematycznej. Oznacza to, że zademonstrujemy, że dla wszystkich danych wejściowych algorytm ostatecznie osiągnie stan, w którym zakończy działanie i zwróci wynik.

Rozważmy dany wejściowy łańcuch tekstowy s o długości n:

1.Przypadek podstawowy: jeśli n = 0, algorytm natychmiast zakończy działanie i wyświetli 0 jako liczbę słów w łańcuchu, co jest poprawnym wynikiem.

2. Krok indukcyjny: Załóżmy, że algorytm kończy działanie i zwraca poprawną liczbę słów dla wszystkich łańcuchów o długości mniejszej niż n. Rozważmy teraz łańcuch s o długości n. Algorytm wykorzystuje pętlę do iteracji znaków w łańcuchu i zliczania liczby słów. Robi to, sprawdzając znaki w łańcuchu i określając, czy są to spacje, czy nie. Jeśli znakiem jest spacja, zwiększa liczbę słów. Gdy pętla dotrze do końca łańcucha, algorytm kończy działanie i wyświetla końcową liczbę słów.

Ponieważ algorytm kończy się dla przypadku podstawowego, a krok indukcyjny zachodzi dla wszystkich łańcuchów o długości n, możemy stwierdzić, że algorytm liczenia słów kończy się dla wszystkich danych wejściowych, co oznacza, że jest algorytmem kończącym (lub końcowym).
## Definicja Algorytm zliczania wyrazów:
Algorytm liczenia słów to program komputerowy, który zlicza częstotliwość występowania słów w danym tekście. Pobiera fragment tekstu jako dane wejściowe, przetwarza go i wyprowadza, ile razy każde słowo pojawia się w tekście.

Algorytm działa poprzez iterację każdego słowa w tekście i utrzymywanie liczby częstotliwości dla każdego unikalnego słowa. Wykorzystuje funkcje manipulacji łańcuchami do rozdzielania tekstu na słowa i ignorowania znaków innych niż alfanumeryczne. Informacje o zliczeniu częstotliwości mogą być przechowywane w strukturze danych, takiej jak tablica, tablica skrótów lub słownik.

Algorytm liczenia słów może być używany w różnych aplikacjach do analizy tekstu, w tym w analizie nastrojów, wyodrębnianiu słów kluczowych i modelowaniu tematów. Może być również używany do wykonywania podstawowych analiz statystycznych danych tekstowych, takich jak znajdowanie najczęściej występujących słów w dokumencie lub średniej długości słów w tekście.
## Złożoność czasowa:
Złożoność czasowa algorytmu liczenia słów zwykle zależy od implementacji, ale powszechnym podejściem jest użycie mapy skrótów do przechowywania częstotliwości każdego słowa. W tym przypadku średnia złożoność czasowa wyniosłaby O(n), gdzie n to liczba słów, ponieważ każde słowo można wstawić i wyszukać na mapie skrótów średnio w stałym czasie. W najgorszym przypadku, gdy wszystkie słowa są różne, złożoność czasowa wyniosłaby O(n) dla wstawienia n słów do mapy mieszania i O(n) dla iteracji przez wszystkie n słów w celu znalezienia ich częstotliwości, co daje całkowitą złożoność czasową O(n) + O(n) = O(2n) = O(n).
## Przykład użycia:
Załóżmy, że masz duży dokument tekstowy zawierający tysiące słów i chcesz przeanalizować częstotliwość występowania każdego słowa w tym dokumencie. Możesz napisać algorytm liczenia słów, aby zliczać częstotliwość występowania każdego słowa w dokumencie i zapisywać wyniki na mapie skrótów. Możesz następnie użyć informacji o częstotliwości do przeprowadzenia różnych rodzajów analiz, takich jak identyfikacja najczęściej występujących słów w dokumencie lub znalezienie słów, które pojawiają się częściej w niektórych częściach dokumentu.

Możesz na przykład użyć algorytmu liczenia słów do przeanalizowania dużej kolekcji książek i zidentyfikowania najczęściej używanych słów w każdym gatunku książek. Informacje te można wykorzystać do stworzenia chmury słów dla każdego gatunku, gdzie rozmiar każdego słowa w chmurze jest proporcjonalny do jego częstotliwości w gatunku. To może dać ci wgląd w typowe słownictwo używane w każdym gatunku i pomóc ci lepiej zrozumieć różnice między nimi.

To tylko jeden przykład, ale algorytmy liczenia słów mogą być używane w różnych aplikacjach do przetwarzania języka naturalnego i analizy tekstu, w tym w analizie tonacji, wyodrębnianiu słów kluczowych i modelowaniu tematów.

### -Realizacja w C dla algorytmu liczenia słów:

```
---Link do kodu---
```
## Jake dane na wejsciu w algorytm, jakie na wyjsciu (i przyklad kiedy wyrazy sa kilka razy):
| Wejscie  | Deiwid Kovalevskij | Uniwersytet w Bialymstoku | Algorytm zliczania wyrazow w C|
| ------- | ------- | --------- | -------- |
| Wyjscie     |  2    |   3   |   5   |

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

## Udowodnienie, że algorytm jest końcowy
Algorytm przechodzenia przez listę dwukierunkową jest końcowy, ponieważ lista dwukierunkowa jest ostateczną strukturą danych, która składa się z finitnej liczby elementów. W każdym kroku algorytmu przemieszcza się w jednym z dwóch kierunków, co oznacza, że po finitnej liczbie kroków algorytm musi dotrzeć do końca listy. W rezultacie proces ten zawsze zakończy się po finitnej liczbie kroków, co oznacza, że algorytm jest końcowy.

## Definicja Algorytmu przechodzenia przez listę dwukierunkową:
Algorytm przechodzenia przez listę dwukierunkową jest algorytmem, który przeszukuje listę dwukierunkową w poszukiwaniu określonych elementów lub dokonuje jakiejś operacji na każdym elemencie listy. Lista dwukierunkowa jest specjalnym rodzajem listy, w której każdy element zawiera wskaźnik do następnego i poprzedniego elementu. Dzięki temu algorytm może przesuwać się w obie strony na liście, co jest różne od tradycyjnej listy jednokierunkowej, w której można przesuwać się tylko w jednym kierunku. Algorytm przechodzenia przez listę dwukierunkową może być stosowany do wielu różnych celów, takich jak wyszukiwanie, sortowanie lub modyfikowanie danych na liście.

## Złożoność czasowa:
Złożoność czasowa algorytmu przechodzenia przez listę dwukierunkową zależy od tego, jak jest on implementowany i jakie są jego cele. W najprostszym przypadku, gdy algorytm jest używany do przeszukania każdego elementu listy, złożoność czasowa jest zwykle opisywana jako O(n), gdzie n jest liczbą elementów na liście. Oznacza to, że algorytm wykonuje n operacji dla każdego elementu na liście, co daje łączną liczbę operacji n.

Jeśli algorytm jest używany do sortowania listy, jego złożoność czasowa może być bardziej skomplikowana i zależeć od wybranego algorytmu sortowania. Na przykład, sortowanie przez wstawianie może mieć złożoność czasową O(n^2), podczas gdy sortowanie przez scalanie ma złożoność czasową O(n log n).

W każdym razie, kluczowe jest zrozumienie, że złożoność czasowa algorytmu przechodzenia przez listę dwukierunkową zależy od wielu czynników i powinna być omówiona w kontekście konkretnego problemu i jego rozwiązania.
## Przykład użycia:
Przykład użycia algorytmu przechodzenia przez listę dwukierunkową może być np. wyszukiwanie określonego elementu na liście. Algorytm może zacząć od początku lub końca listy i przesuwać się w kierunku przeciwnym, aż znajdzie pożądany element lub dojdzie do końca listy.
### -Realizacja w C dla algorytmu przechodzenia:

```
---Link do kodu---
```
## Jake dane na wejsciu w algorytm, jakie na wyjsciu:
| Wejscie  | 10, 15, 19, 20 |
| ------------- | ------------- |
| Wyjscie  | 20, 19, 15, 10  |

Algorytm ten odwiedza każdy węzeł na liście, rozpoczynając od węzła głównego, podążając za kolejnymi 
wskaźnikami i przetwarzając dane w każdym węźle, aż do końca listy. Złożoność czasowa tego algorytmu 
również wynosi O(n). Przykładem zastosowania tego algorytmu jest sytuacja, w której trzeba 
przetworzyć lub wydrukować elementy na liście podwójnie połączonej w kolejności, w jakiej pojawiają 
się na liście.

## Zródła
[Algorytm wyznaczania najmniejszej wspólnej wielokrotności](https://eduinf.waw.pl/inf/alg/001_search/0008.php)

[Algorytm zliczania wyrazów](https://eduinf.waw.pl/inf/alg/001_search/0053.php)

[Algorytm przechodzenia przez listę dwukierunkową](https://eduinf.waw.pl/inf/alg/001_search/0087.php)
