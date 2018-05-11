#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char *argv[]) {
   struct dupa {int a; int b;}; 
   struct dupa *tablica[2];
   struct dupa pierwsza_struktura={1,2};
   struct dupa druga_struktura={3,4};
    tablica[0]=&pierwsza_struktura;
    tablica[1]=&druga_struktura;
   printf("ile: %d\n",(*tablica[0]).a);
}
