#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define DRUKUJ(x) printf(#x" is %d\n",x);

int main(int argc, char *argv[]) {
    DRUKUJ(3+4);
    DRUKUJ(4*12);
}
