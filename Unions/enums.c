#include <stdio.h>
#include <stdlib.h>
#include <string.h>

enum kolory {RED, BLACK=10, WHITE};


int main(int argc, char *argv[]) {
    enum kolory kolor1;
    enum kolory kolor2;
    kolor2=BLACK;
    if (kolor2==1) {
        puts("rowne!");
    }    
    for (kolor1=RED;kolor1<100;kolor1++){
        printf("kolor: %d\n",kolor1);
    }

}
