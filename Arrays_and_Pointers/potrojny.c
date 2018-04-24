#include <stdio.h>

int main() {
    int a=3;
    int * p1=&a;
    int ** p2=&p1;
    int *** p3=&p2;
    printf("a = %d, p1 = %p , p2 = %p , p3 = %p - oznacza to, ze ***p3 = %d \n", a, p1, p2, p3, ***p3 );
}
