#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <string>
#include <cstdio>
// Autor Krystian Kręcik WARIANT 32.
using namespace std;
int main() {
 
    printf("Zadanie 1\n");
    printf("Prosze podac wspolczynnik rownania kwadratowego w kolejnosci a, b\n");
    int a, b, c=8;
    scanf("%d %d", &a, &b);
    a = 4 * a;
    if (a != 0) {
        float delta = (b * b) - (4 * a * c);
        if ((delta) < 0) {
            printf("Delta ujemna brak rozwiazan");
        }
        else if (delta == 0) { printf("%f", -b / (2. * a)); }
        else { printf("%lf", (-b - sqrt(delta)) / (2. * a)); printf(" %lf", (-b + sqrt(delta)) / (2. * a)); }
    }
    else {
        if (b == 0) {
            if (c == 0) {
                printf("Nieskonczenie wiele");
            }
            else printf("Brak rozwiazan1");
        }
        else {
            printf("%lf", (-c) / b);
        }
    }

    printf("\nZadanie 2\n");
    printf("Podaj 10 liczb calkowitych: ");
    int temp[10];
    for (int i = 0; i < 10; i++)
        scanf("%d", &temp[i]);
    for (int i = 0; i < 5; i++)
        printf("%d ", temp[2 * i + 1]);


    printf("\nZadanie 3\n");
    printf("Podaj trzy liczby calkowite: ");
    int tab[3];
    for (int i = 0; i < 3; i++) scanf("%d", &tab[i]);
    int max = -999999, min = 9999999;
    for (int i = 0; i < 3; i++) {
        if (tab[i] > max) max = tab[i];
        if (tab[i] < min) min = tab[i];
    }
    printf("Max: %d, Min: %d", max, min);
 
    printf("\nZadanie 4\n");
    printf("Podaj 10 liczb calkowitych moga byc liczby ujemne: ");
    int srednia_dod = 0, srednia_uj = 0, temp1, liczba_d = 0, liczba_uj = 0;
    for (int i = 0; i < 10; i++) {
        scanf("%d", &temp1);
        if (temp >= 0) {
            srednia_dod += temp1;
            liczba_d++;
        }
        if (temp < 0) {
            srednia_uj += temp1;
            liczba_uj++;
        }
    }
    if (liczba_d > 0 and liczba_uj > 0)
        printf("Srednia dodatnich liczb: %f, srednia ujemnych liczb: %f", srednia_dod / float(liczba_d), srednia_uj / float(liczba_uj));
    else if (liczba_d > 0 and liczba_uj == 0)
        printf("Srednia dodatnich liczb: %f, srednia ujemnych liczb: %d", srednia_dod / float(liczba_d), 0);
    else if (liczba_d == 0 and liczba_uj > 0)
        printf("Srednia dodatnich liczb: %d, srednia ujemnych liczb: %f", 0, srednia_uj / float(liczba_uj));
}