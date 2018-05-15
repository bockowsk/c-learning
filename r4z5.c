#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BOOK "War and Peace"

int main(int argc, char *argv[]) {
    float cost =12.99;
    float percent = 80.0;
    printf("\"%s\" %.2f and %.1f\n",BOOK,cost,percent);
}
