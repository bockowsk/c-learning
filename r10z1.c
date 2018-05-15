#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char *argv[]) {
    int ref[] = {8,4,0,2};
    int *wsk;
    int indeks;
    for (indeks=0,wsk=ref;indeks<4;indeks++,wsk++) {
        printf("%d\t%d\n",ref[indeks],*wsk);
        int boolean=ref==&ref[0];
        printf("%d\n",boolean);
        printf("eksperyment: %p\n",&ref[0]);
        printf("eksperyment: %p\n",ref+1);
        printf("eksperyment: %p\n",++ref);
    }
}
