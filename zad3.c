#include <stdio.h>


int main() {
float temperatura, wynik;
char kierunek;

printf("podaj temperature: "); //wczytanie wartosci temperatury
scanf("%f" , &temperatura);

printf("podaj kierunek przeliczenia (C lub F): ");
scanf( " %c" , &kierunek);

if (kierunek == 'C') {//przeliczanie na celsjusz
    wynik = temperatura * 1.8 + 32; // °C × 1.8 + 32

    printf("%.2f °C = %.2f °F" , temperatura , wynik); // wyswietlanie wyniku (jak opisane nizej)
}

else  if (kierunek == 'F'){ //przeliczenie na fahrenheit
    wynik = (temperatura - 32) / 1.8; //wzor z pliku 

    printf("%.2f°F = %.2f°C" , temperatura , wynik ); // wyswietanie (wynik 2 liczby po przecinku (%.2f))
}

else {
printf("bledny znak kierunku"); //zabezpieczenie przed plednym znakiem kierunku
}

    return 0; 
}
