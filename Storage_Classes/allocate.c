#include <stdio.h>
#include <stdlib.h>

int main() {
    double * pointer1=(double *)malloc(10*sizeof(double));
    pointer1[9]=28.889;
    printf("%.2f\n",pointer1[9]);
    free(pointer1);
}
