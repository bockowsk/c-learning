#include <stdio.h>
#define LANCUCH "cos tam ktos tam"

int main() {
    char tab[]=LANCUCH;
    const char *wsk=LANCUCH;
    printf("\"cos tam ktos tam\": %p\n", "cos tam ktos tam");    
    printf("adres tab: %p\n",tab);    
    printf("adres wsk: %p\n",wsk);    
    printf("adres tab: %p\n","cos tam ktos tam");    
    
}
