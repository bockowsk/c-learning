#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char *argv[]) {
    //float a=(float)7/64;
    //long double b=(float)7/64;
    float a=0.123456789012345;
    double b=0.123456789012345;

    printf("%-10s%.15f\n","float",a);
    printf("%-10s%.15f\n","double",b);

}
