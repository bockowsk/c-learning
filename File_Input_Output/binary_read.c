#include <stdio.h>
#include <stdlib.h>

int main(int agrc, char *argv[]) {
    int odczytane[5];
    FILE *plik1=fopen(argv[1],"r");
    fread(odczytane,sizeof(int),5,plik1);
    int rozmiar=sizeof(int);
    int i;
    for (i=0;i<sizeof(odczytane)/rozmiar;i++) {
        printf("%d\n",odczytane[i]);
    }
}

