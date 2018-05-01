#include <stdio.h>
#include <string.h>
#define ILOSC 2
#define OPIS 40

struct account {
    char normal_name[OPIS];
    float balance;
};

void sumuj(const struct account [], int);

int main(int argc, char *argv[]) {
    // bedzie liczyc sume oszczednosci w bezpieczny sposob
    struct account bockowski[ILOSC]={
        {
            "biezacy rachunek",
            3200.22
        },
        {
            "oszczednosci na wakacje",
            50720.89
        }
    };
    sumuj(bockowski,ILOSC);
}

void sumuj(const struct account a[], int ile) {
    int i=0;
    float suma=0;
    for (i;i<ile;i++) {
       suma+=a[i].balance;
    }
    printf("w sumie:%20f\n",suma);
}
