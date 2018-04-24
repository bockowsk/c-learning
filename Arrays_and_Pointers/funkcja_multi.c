#include <stdio.h>
#define elementy 2

int suma(int (*wskaznik)[elementy],int n);

int main() {
    int tablica[3][2]={
        {1,2},
        {3,4},
        {5,6},
    };
    int razem=suma(tablica,3);
    printf("suma: %d\n",razem);
}

int suma(int (*wskaznik)[elementy],int n) {
    int i=0;
    int suma=0;
    for (i;i<n;i++) {
        int j=0;
        for (j;j<elementy;j++) {
            suma+=wskaznik[i][j];
        }
    }
    return suma;
}
