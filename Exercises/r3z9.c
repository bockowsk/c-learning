#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[]) {
    char c1,c2,c3,c4;
    c1='\r';
    c2=13;
    c3=015;
    c4=0xd;
    if (c1 == c2 == c4) {
        puts("hura!");
    }
}


