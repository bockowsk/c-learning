#include <stdio.h>

int main() {
    char * tekst="lala nie badz glupi";
    char * kopia=tekst;
    printf("%s\n",kopia);
    printf("tekst = %s, &tekts = %p, wartosc = %p\n", tekst, &tekst, tekst);
    printf("kopia = %s, &kopia = %p, wartosc = %p\n", kopia, &kopia, kopia);
}
