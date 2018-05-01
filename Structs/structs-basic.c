#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXTYT 40
#define MAXAUT 40
#define MAXKS 100

char * wczytaj(char *z, int ile);

struct ksiazka {
    char tytul[MAXTYT];
    char autor[MAXAUT];
    float wartosc;  
};

int main(int argc, char *argv[]) {
    struct ksiazka biblioteka[MAXKS];
    puts("podaj tytul ksiazki");
    puts("aby zakonczyc nacisnij enter na poczatku wiersza"); 
    int licznik=0;
    while ( licznik < MAXKS && wczytaj(biblioteka[licznik].tytul, MAXTYT) != NULL && biblioteka[licznik].tytul[0] != '\0'  ) {
        puts("podaj autora");
        wczytaj(biblioteka[licznik].autor,MAXAUT);
        puts("podaj wartosc");  
        scanf("%f",&biblioteka[licznik].wartosc);
        licznik++;
        while (getchar() != '\n') {
            continue;
        }
        if (licznik < MAXKS)
            puts("podaj kolejny tytul");
    }
    puts("WYSWIETLANIE");
    if (licznik > 0) {
        puts("twoja lista ksiazek");
        int i;
        for (i=0;i<licznik;i++) {
            printf("tytul: %s, autor: %s, cena: %f\n", biblioteka[i].tytul, biblioteka[i].autor, biblioteka[i].wartosc);
        }
    }
}

char * wczytaj(char *z, int ile) {
        char * wynik;
        char * tutaj;
        wynik=fgets(z,ile,stdin);
        if (wynik) {
            tutaj=strchr(z, '\n'); // szukamy nowego wiersza
            if (tutaj) // jesli adres jest rozny od null
                *tutaj='\0';
            else 
                while (getchar() != '\n')
                    continue;
        }
        return wynik;
    }

