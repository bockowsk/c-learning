#include <stdio.h>

int main() {
    char tab[5][2]={
        {'a','b'},
        {'c','d'},
        {'e','f'},
        {'g','h'},
        {'i','j'},
    };
    printf("adres calosci: tab = %p, to to samo co &p[0][0] = %p\n",tab,&tab[0]);
    // roznica bedzie 4, bo 2x po 2x1 Byte na char
    printf("tab = %p ale tab+2 = %p \n",tab,tab+2);
    printf("spodziewam sie tu skoku o 1 bo to drugi poziom\n");
    printf("dodawanie indeksow to pointer arithmetic, wiec: tab[0] = %p , a tab[0]+1 = %p\n", tab[0], tab[0]+1);
    printf("wartosci powinny byc a i b: %c i %c\n", *tab[0], *tab[0]+1);
    printf("adres &tab[3][1] = %p, a wartosc tab[3][1] = %c , a jeszcze inaczej *&tab[3][1] = %c\n", &tab[3][1], tab[3][1], *&tab[3][1]);
    printf("alternatywny zapis wskaznikami: (*(tab+3)+1) = %p , a jego wartosc to *(*(tab+3)+1) = %c\n", (*(tab+3)+1), *(*(tab+3)+1));
    return 0;
}
