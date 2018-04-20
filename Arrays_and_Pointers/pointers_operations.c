#include <stdio.h>
int main() {
    int urna[5]={100,200,300,400,500};
    int *wsk1, *wsk2, *wsk3;
    wsk1=urna;
    wsk2=&urna[2];
    printf("wartosc wskaznika, wskazywana wartosc, adres wskaznika:\n");
    printf("wsk1=%p, *wsk1=%d, &wsk1=%p\n", wsk1, *wsk1, &wsk1);

    // dodawanie wskaznikow
    printf("dodawanie wskaznikow\n");
    wsk3=wsk1+4;
    // dodawanie int do wskaznika
    printf("dodanie int do wskaznika:\n");
    printf("wsk1=%p, wsk1+4 = %p, *(wsk1+4)=%d\n",wsk1, wsk1+4,*(wsk1+4) );

    // inkrementacja wskaznikow
    wsk1++;
    printf("wartosc po wsk1++:\n");
    printf("wsk1=%p, *wsk1=%d, &wsk1=%p\n", wsk1, *wsk1, &wsk1);
    
    // dekrementacja wskaznika
    printf("przed:");
    printf("wsk2=%p, *wsk2=%d, &wsk2=%p\n", wsk2, *wsk2, &wsk2);
    printf("po:");
    wsk2--;
    printf("wsk2=%p, *wsk2=%d, &wsk2=%p\n", wsk2, *wsk2, &wsk2);
   
    // przwyracanie
    wsk1--;
    wsk2++;
    
    // odejmowanie wskaznikow
    printf("odejmowanie wskaznikow");
    printf("wsk2=%p, wsk1=%p, wsk2-wsk1=%d\n", wsk2, wsk1, wsk2-wsk1);
    
    //odejmowanie zmiennej typu int od wskaznika
    printf("wartosc wskaznika, wskazywana wartosc, adres wskaznika:\n");
    printf("wsk3=%p, *wsk3=%d, &wsk3=%p\n", wsk3, *wsk3, &wsk3);
     printf("odejmowanie zmiennej typu int od wskaznika:\n");
    printf("wsk3=%p, wsk3-2=%p, *(wsk3-2)=%d\n", wsk3, wsk3-2,*(wsk3-2));
}
