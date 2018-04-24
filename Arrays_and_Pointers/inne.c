#include <stdio.h>

int main() {
    int *pt;
    int (*pa)[1];
    int ar1[3][1];
    int ar2[3][2];
    int **p2;

    int a=10;
    pt=&a;
    int t1[3][1]={{1},{2}, {3}};
    pt=t1[1];
    pa=t1;
    p2=&pt;
    pt=&a;
    p2=&pt;

    printf("adresy: t1 = %p, t1[0] = %p, &t1[0][0]= %p\n", t1, t1[0], &t1[0][0]);
    printf("zmienna a = %d, address zmiennej a, int * pt = & a = %p, adres pointera do adresu a p2 = %p \n ",a,pt,p2);
    

}
