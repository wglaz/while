#include <stdio.h>

float suma = 1573.821, skladnik = 3.51;
int licznik = 0;


int main() {
    while (suma > 1E-10) {
        suma -= skladnik;
        skladnik *= skladnik;
        ++licznik;
    }
    printf("%d", licznik);

    return 0;

}