#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    int licznik=0;
    float suma=0.0f;
    float pobrana=0.0f;
    if (argc > 2) {
        fputs("ERROR\n",stderr);
        exit(2);
    } 
    else if (argc == 2) {
        FILE *plik;
        plik=fopen(argv[1],"r");
        while (fscanf(plik,"%f",&pobrana)==1) {
            licznik++;
            suma+=pobrana;
        }
    }
    else {
        while (scanf("%f",&pobrana)==1) {
            licznik++;
            suma+=pobrana;
        }          

    }
    printf("suma floatow: %f\n",suma);
}
