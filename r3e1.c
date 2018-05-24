#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    int liczba=2147483640;
    //int liczba=2147483647;
    //int size=sizeof(int);
    //printf("rozmiar int: %d\n",size);
    while (liczba > 10) {
        //liczba++;
        printf("liczba: %d\n",++liczba);
    }
}
