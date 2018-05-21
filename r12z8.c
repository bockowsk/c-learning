#include <stdio.h>

char kolor = 'B';
void pierwsza(void);
void druga(void);

int main(void) {
    extern char kolor;

    printf("kolor w main wynosi %c (expected 'B') \n",kolor);
    puts("expected R");
    pierwsza();
    printf("kolor w main wynosi %c (expected 'B') \n",kolor);
    puts("expected G");
    druga();
    printf("kolor w main wynosi %c (expected 'G') \n",kolor);
    return 0;
}

void pierwsza() {
    char kolor;
    kolor="R";
    printf("kolor w pierwsza wynosi %c\n",kolor);
}

void druga() {
    kolor='G';
    printf("kolor w druga wynosi %c\n",kolor);
}
