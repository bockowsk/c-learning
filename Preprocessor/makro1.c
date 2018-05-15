#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BLAD puts("blad!");
#define KWADRAT(x) x*x
#define TEKST(x) printf(#x"^2=%d\n",KWADRAT(x))
#define PR(...) printf(__VA_ARGS__)


int main(int argc, char *argv[]) {
    BLAD;
    BLAD;   
    char *tekst1="dupa jeza zawsze swieza\n";
    int zmienna=2;
    TEKST(2);
    PR("jakis tekst: %s", tekst1);
}
