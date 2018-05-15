#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TEKST(...) printf(__VA_ARGS__)
int main(int argc, char *argv[]) {
    int *wsk;
    // a
    int torf[2][2] = {12,14,16};
    wsk=torf[0];
    printf("%d i %d\n", *wsk,*(wsk+2));
    printf("%p i %p\n", wsk,(wsk+2));

    // b
    int torf2[2][2]={{12}, {14,15}};
    wsk=torf[0];
    printf("%d i %d\n", *wsk,*(wsk+2));
    printf("%p i %p\n", wsk,(wsk+2));

    // c
    int (*wsk2)[2];
    int torf3[2][2]={12,14,16};
    wsk2=torf3;
    TEKST("%d (bedzie 12)\n",**wsk2);
    TEKST("%d (bedzie 16)\n",**(wsk2+1));
    
    // d
    int (*wsk3)[2];
    int torf4[2][2]={{12},{14,16}};
    wsk3=torf4;
    TEKST("%d (bedzie 12)\n",**wsk3);
    TEKST("%d (bedzie 14)\n",**(wsk3+1));
}
