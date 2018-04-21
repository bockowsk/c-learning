#include <stdio.h>

int main() {
    int * wsk;
    int fort[2][2]={{12}, {14,15}};
    // wydaje mi sie, ze sie z tego robi:
    // { {12,0}, {0,0} , {14,15}
    wsk=fort[0];
    printf("*wsk = %d, *(wsk+2) = %d\n",*wsk, *(wsk+2));
    printf("TESTY:");
    char tablica1[]={'a', 'b', 'c'};
    printf("tablica1 to jest adres pierwszego elementu, tablica1[0] to wartosc a, zatem wartosc &tablica1[0] to rowniez 'a'\n");
    printf("tablcica1 = %p, tablica1[0] = %c, &tabluca1[0] = %p\n", tablica1, tablica1[0], &tablica1[0]);
    printf("adres 2giego elementu: *tablica2 = %p lub &tablica1[2] = %p \n", tablica1+2, &tablica1[2]);
    printf("wartosc 2giego elementu za pomoca notacji wskaznika: *tablica1+2 = %d oraz za pomoca notacji indeksowej: tablica1[2] = %d\n", *tablica1+2, tablica1[2]);
    printf("mysle, ze **fort, da nam podwojna dereferencje i zwroci wartosc 12, czyli **fort = %d\n", **fort);
    //int i[2]={1,2};
    char i[]="dupa";
    char *pointer1=i;
    char * j=&i;
    int * p2;
    printf("sprawdzmy: &i = %p , i = %p \n", &i, i);
    printf("sprawdzmy: pointer1 = %p, &pointer1 = %p\n", pointer1, &pointer1);
    printf("rozmiar int * = %d, a rozmiar char * = %d\n", sizeof(p2), sizeof(pointer1));
}
