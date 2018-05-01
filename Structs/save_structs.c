#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#define MAXBOOKS 10
#define MAXSTRINGS 20


/*
 * bedzie zapisywac structy
 */
struct book {
    char nazwa[MAXSTRINGS];
    char autor[MAXSTRINGS];
    float wartosc;
};

void czyszczenie(struct book *);
void zapisz(struct book *,FILE *);

int main(int argc, char *argv[]) {
    struct book *books[MAXBOOKS];
    struct book *book1=malloc(sizeof(struct book));
    struct book *book2=malloc(sizeof(struct book));
    strcpy(book1->nazwa,"jakas ksiazka");
    strcpy(book1->autor,"Olimp Bockowski");
    book1->wartosc=139.22;
    strcpy(book2->nazwa,"fajna ksiazka2");
    strcpy(book2->autor,"janusz klimek");
    book2->wartosc=23.22;
    books[0]=book1;
    books[1]=book2;
    // otwieranie pliku
    FILE *plik;
    if ((plik=fopen("book.dat", "a")) == NULL) {
        fputs("ERROR!",stderr);
    }
    // zapis
    int i=0;
    for (i;i<2;i++) {
        zapisz(books[i],plik);
    }
    // odczyt
    // najpierw przewiniecie pliku
    rewind(plik);
    // przygotowanie tablicy wskaznikow
    struct book *b[2];
    fread(b[0],sizeof(struct book),1,plik);
    printf("ile ma i; %d\n",i);
    printf("NAZWA:\t%s\n",b[i]->nazwa);
//    fread(b[1],sizeof(struct book),1,plik);
//    printf("NAZWA:\t%s\n",b[1]->nazwa);
    // konczenie
    free(book1);
    free(book2);
    fclose(plik);
}

void czyszczenie(struct book *b) {
    free(b);
}

void zapisz(struct book *b,FILE *p) {
    if (fwrite(b,sizeof(struct book),1,p)==0) {
        fputs("ERROR",stderr);
    }
}
