#include <stdio.h>
#include <stdbool.h>

int main() {
    int rok_urodzenia = 2005;
    float wzrost = 3.14f;
    char znak = 'A';
    bool prawko = true;

    printf("podaj rok urodzenia: ");
    scanf(" %d" , &rok_urodzenia);

    printf("podaj znak: ");
    scanf(" %c" , &znak); 

    printf("wybrales znak %c" , znak);

    printf("Zmienna 'rok_urodzenia' ma wartość: %d i zajmuje %zu bajty\n", rok_urodzenia, sizeof(rok_urodzenia));
    printf("Zmienna 'wzrost' ma wartość: %.2f i zajmuje %zu bajty\n", wzrost, sizeof(wzrost));
    printf("Zmienna 'znak' ma wartość: %c i zajmuje %zu bajty\n", znak, sizeof(znak));
    printf("Zmienna 'prawko' ma wartość: %d (true=1, false=0) i zajmuje %zu bajt\n", prawko, sizeof(prawko));

    return 0;
}