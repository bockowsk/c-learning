#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TEKST(...) printf(__VA_ARGS__)
int main(int argc, char *argv[]) {
    int siatka[30][100];
    TEKST("adres siatka[22][56] : %p\n",&siatka[22][56]);
    TEKST("adres siatka[22][56] 1 sposob: %p\n",&siatka[22][0]);
    TEKST("adres siatka[22][56] 2 sposob: %p\n",(siatka+22)[0]);
    TEKST("adres siatka[0][0] 1 sposob: %p\n",(siatka)[0]);
    TEKST("adres siatka[0][0] 2 sposob: %p\n",&siatka[0][0]);
    TEKST("adres siatka[0][0] 1 sposob: %p\n",(int*)siatka);
}
