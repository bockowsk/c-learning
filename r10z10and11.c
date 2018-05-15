#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TEKST(...) printf(__VA_ARGS__);

int main(int argc, char *argv[]) {
    float piwo[10], rzeczy[10][5], *wf, wartosc=2.2;
    int i = 3;

    // a 
    piwo[2]=wartosc; // ok
    // b
    scanf("%f",&piwo); // zle, nie trzeba & a jak jest to trzeba dac 0 , jednak ok
    // c
    ///piwo=wartosc;   // zle
    // d
    TEKST("d. %f\n",piwo); // bedzie zle
    
    TEKST("adres pierwszego: %p\n",piwo);
    TEKST("adres drugiego: %p\n",&piwo);
    // e
    rzeczy[4][4]=piwo[3]; // dobrze
    // f 
    //rzeczy[5]=piwo; // zle
    // g
    //wf=wartosc; // zle
    // h
    wf=piwo; // ok
    
    // zadanie 11
    int tablica[800][600];
}
