#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "z6.h"
int main(int argc, char *argv[]) {
    LENS tablica[10];
    LENS trzeci={500.0, 2.0, "jakas"};
    tablica[2]=trzeci;
    LENS pierwszy;
    char *cos="firma";
    pierwszy.foclen=10.1; pierwszy.fstop=20.1; pierwszy.brand=cos;
}
