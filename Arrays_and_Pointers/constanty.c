#include <stdio.h>
#define MIESIACE 12 
int main() {
    const int dni[MIESIACE]={31,28,31,30,31,30,31,31,30,31,30,31};
    double oplaty[]={1.2,3.44,5.891};
    oplaty[0]=1.0;
    const double *pointer1=oplaty;
    pointer1[1]=2.2;
}
