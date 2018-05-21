#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void pokaz(const double tab[], int n);
void pokaz2(const double tab2[][3], int n);

int main(int argc, char *argv[]) {
    const double tab[]={8,3,9,2};
    // a
    pokaz(tab,4);
    const double tab2[2][3]={{8,3,9}, {5, 4, 1}};
    // b 
    pokaz2(tab2,2);
}

void pokaz(const double tab[], int n) {
    int i;
    for (i=0;i<n;i++) {
        printf("%f\n",tab[i]);
    }
}
void pokaz2(const double tab2[][3], int n) {
    int i;
    int j;
    for (i=0;i<n;i++) {
        puts("KOLEJNY");
        for (j=0;j<3;j++) {
            printf("%f\n",tab2[i][j]);
        }
    }
}
