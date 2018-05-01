#include <stdio.h>
#include <stdlib.h>
#define DLUGOSC 20


struct dane_osobowe {
    char imie[DLUGOSC];
    char nazwisko[DLUGOSC];
};
    
struct facet {
    int numer;
    struct dane_osobowe personalia;
    char ulubione_jedzenie[DLUGOSC];
    char zawod[DLUGOSC];
    float dochody;
};

float funkcja1(struct facet);
float funkcja2(struct facet*);



int main(int argc, char *argv[]) {
    // tablica dwoch facetow
    struct facet tablica1[2]={
        {
            1,
            {"Olimp", " Bockowski"}, 
            "mango", 
            "PTSE",
            17000.25
        },
        {
            2,
            {"Tomek", "Porozynski"},
            "jablka",
            "Consultant",
            9800.56
        }
    };
    struct facet *gosc;
    printf("adres #1: %p, adres #2: %p\n",&tablica1[0], &tablica1[1]);
    gosc=&tablica1[0];
    printf("adres wskaznika: %p, adres wskaznika: %p\n", gosc, gosc+1);
    printf("gosc zawod: gosc->zawod = %s\n", gosc->zawod);
    printf("wartosc: (*gosc).dochody = %f\n",(*gosc).dochody);
    printf("gosc2 zawod: (*gosc+1).zawod = %s\n", (*(gosc+1)).zawod);
    float netto1=funkcja1(tablica1[0]);
    float netto2=funkcja2(&tablica1[0]);
    printf("facet1: %f, facet2: %f\n", netto1, netto2);

}    

float funkcja1(struct facet f) {
   float netto=f.dochody*0.77;
   return netto; 
}

float funkcja2(struct facet *f) {
    float netto=(f->dochody)*0.77;
    return netto;
}
