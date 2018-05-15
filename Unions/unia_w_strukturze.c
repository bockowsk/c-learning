#include <stdio.h>
#include <stdlib.h>
#include <string.h>

union ilosc {
    float waga;
    int ile;
};

struct owoce {
    char *nazwa;
    float cena;
    union ilosc ile;
};

int main(int argc, char *argv[]) {

    char *nazwa=malloc(sizeof(char)*20);
    scanf("%20s",nazwa);
    struct owoce owoc;
    owoc.nazwa=nazwa;
    owoc.cena=20.22;
    owoc.ile.waga=3.22;
    
    printf("owoc: %s, ile:: %f\n",owoc.nazwa,owoc.ile.waga);

}
