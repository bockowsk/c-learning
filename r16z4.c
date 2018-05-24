#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define EVEN_GT(X,Y) (X>Y && X%2==0) ? 1 : 0

int main(int argc, char *argv[]) {
   int a,b,wynik;
   a=10;b=14;
   wynik=EVEN_GT(b,a); 
   printf("wynik: %d\n",wynik);
   wynik=EVEN_GT(a,b); 
   printf("wynik: %d\n",wynik);
   wynik=EVEN_GT(8,1); 
   printf("wynik: %d\n",wynik);
}
