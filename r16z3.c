#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MINIMUM(x,y) (x>y)? y : x

int main(int argc, char *argv[]) {
    int a=10;
    int b=14;
    int wynik=MINIMUM(a,b);
    printf("wynik: %d\n",wynik);    
}
