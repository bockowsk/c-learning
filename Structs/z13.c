
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


    double funkcja1(double,double);
    double funkcja2(double,double);
    double funkcja3(double,double);
    double funkcja4(double,double);
    double (*tablica[4])(double,double)={funkcja1,funkcja2,funkcja3,funkcja4};    
