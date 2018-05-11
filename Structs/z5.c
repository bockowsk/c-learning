#include "z3.h"
int funkcja1(int ktory, struct s1 struktura[]) {
    int j=0;
    int suma_dni;
    int suma_numerow;
    for (j;j<ktory;j++) {
        suma_dni=(*(struktura+j)).days;
        //suma_dni+=(*(struktura[j])).days;
        //suma_dni+=(struktura[j])->days;
        //suma_numerow=+(struktura+j)->month;
    }
    return suma_dni;
}
