#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char *argv[]) {
    float a=(float)7/64;
    long double b=(float)7/64;
    //float a=0.123456789012345;
    //double b=0.123456789012345;

    printf("%-10s%f\n","float",a);
    printf("%-10s%f\n","double",b);

    if (a==0.109375) {
        puts("SUPER!");
    }
    float c=(float)3/5;
    if (c==0.6) {
        puts("SUPER znowu");
    }
    printf("%-10s%.10f\n","float",c);
}
