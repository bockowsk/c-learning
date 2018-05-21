#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LANCUCH "jestem wyjatkowy"
#define TEKST(...) printf(__VA_ARGS__)

int main(int argc, char *argv[]) {
    char tab[]=LANCUCH;
    const char *wsk = LANCUCH;
    TEKST("adres \"jestem wyjatkowy\": %p\n","jestem wyjatkowy"); 
    TEKST("adres tab: %p\n",tab);
    TEKST("adres wsk: %p\n",wsk);
    TEKST("adres LANCUCH: %p\n",LANCUCH);
    char *wskaznik="dupa";
    wskaznik[1]='U';
}
