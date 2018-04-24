#include <stdio.h>
int main() {
    char tt[]="lalaej";
    int ile=sizeof(tt);
    char *t=tt;
    for (t;t<tt+ile;++t) {
            printf("litera: %c\n",*t);
    }
    float f1=0.23;
    float *p1=&f1;
    float **p2=&p1;
    float ***p3=&p2;
    printf("p1: %p, value: ***p3 = %f\n",p3, ***p3);
}
