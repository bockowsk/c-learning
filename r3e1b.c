#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char *argv[]) {
    float liczba=2.0e20f+1.0;
    printf("liczba+1: %f\n",liczba-2.0e20f);
    //liczba=1.0000e36;
    printf("liczba+1: %f\n",liczba+1.0f);
}
