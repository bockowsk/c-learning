#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    char litera;
    FILE *plik;

    if ((plik=fopen(argv[1],"rb")) == NULL) {
        exit(2);
    }
    fseek(plik,0L,SEEK_END);
    long ostatni=ftell(plik);
    long licznik=ostatni;
    //printf("znakow: %d\n",ostatni);
    fseek(plik,-1L,SEEK_END);
    litera=getc(plik);
    licznik--;
    printf("%c",litera);
    long pozycja;
    while (licznik>=0) {
        fseek(plik,-(ostatni-licznik),SEEK_END);
        litera=getc(plik);
        printf("%c",litera);
        licznik--;
    }
    fclose(plik);
}
