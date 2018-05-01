#include <stdio.h>

void rejestracja();

int main() {
    puts("glowna funkcja"); 
    rejestracja();
    rejestracja();
    rejestracja();
    return 0;
}

void rejestracja() {
    static float ilosc=0;
    puts("rejestruje usera");
    printf("%.1f\n",ilosc);
    ilosc++;
}
