#include <stdio.h>
int main() {
    long int i=3;
    long int *p=&i;
    printf("&i = %p, next: %p, next %p \n", p, (p+1), (p+2) );
    int tab[]={1, 2, 3, 4};
    int *p2=tab;
    printf("tab: %p, p2: %p, tab+1=%p, wartosc: *(tab+1) = %d\n",tab, p2, tab+1, *(tab+1));

}
