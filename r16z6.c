#include <stdio.h>
// macros
#define A 25
#define B " " // space
#define PS() printf("%s",B) // c
#define BIG(X) 3+X
#define SUMSQ(X,Y) X*X+Y*Y


int main(int argc, char *argv[]) {
    int wynik;
    wynik=SUMSQ(2,4);
    printf("SUMSQ: %d\n",wynik);
}
