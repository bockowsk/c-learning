#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ROZMIAR 20


struct dane_osobowe {
    char *name;
    char *surname;
    int letters;
};

void getinfo(struct dane_osobowe *);
void setinfo(struct dane_osobowe *);
void showinfo(struct dane_osobowe *);
void cleanup(struct dane_osobowe *);

int main(int argc, char *argv[]) {
   struct dane_osobowe osoba1; 
   getinfo(&osoba1);
   setinfo(&osoba1);
   showinfo(&osoba1);
    cleanup(&osoba1);
}

void getinfo(struct dane_osobowe *daos) {
    puts("podaj imie");
    char imie[ROZMIAR];
    char nazwisko[ROZMIAR];
    fgets(imie,ROZMIAR,stdin);
    puts("podaj nazwisko");
    fgets(nazwisko,ROZMIAR,stdin);
    char *temp_imie=(char *)malloc(sizeof(char)*strlen(imie)+1);
    char *temp_nazwisko=(char *)malloc(sizeof(char)*strlen(nazwisko)+1);
    strcpy(temp_imie,imie);
    strcpy(temp_nazwisko,nazwisko);
    daos->name=temp_imie;
    daos->surname=temp_nazwisko;
}

void setinfo(struct dane_osobowe *daos) {
    int letters=strlen(daos->name)+strlen(daos->surname);
    daos->letters=letters;
}

void showinfo(struct dane_osobowe *daos) {
    printf("imie:%20s, nazwisko:%20s, liter:%5d\n",daos->name,daos->surname,daos->letters);
} 

void cleanup(struct dane_osobowe *daos) {
    puts("czytszczenie...");
    free(daos->name);
    free(daos->surname);
    puts("done!");
}
