#include <stdio.h>
int main() {
    char tekst[20];
    puts("podaj: ");
    fgets(tekst,20,stdin);
    fputs(tekst,stderr);
}
