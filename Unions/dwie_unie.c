#include <stdio.h>
#include <stdlib.h>
#include <string.h>

union ilosc {
    float waga;
    int count;
    double waga2;
};

int main(int argc, char *argv[]) {
    union ilosc unia1={22.8};
    union ilosc unia2=unia1;
    union ilosc unia3={21.9};
    printf("unia1: %p, unia2: %p, unia3; %p, sizeof: %d\n",&unia1, &unia2, &unia3,sizeof(union ilosc));
}
