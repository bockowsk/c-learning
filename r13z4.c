#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    FILE *plik;
    int licznik=0;
    float suma=0.0f;
    float pobrana=0.0f;
    if (argc > 2) {
        fputs("ERROR\n",stderr);
        exit(2);
    } 
    else if (argc == 2) {
        plik=fopen(argv[1],"r");
    }
    else {
        plik=stdin;
    }
    while (fscanf(plik,"%f",&pobrana)==1) {
        licznik++;
        suma+=pobrana;
    }
    printf("suma floatow: %f\n",suma);
}
