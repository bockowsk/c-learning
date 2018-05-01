#include <stdlib.h>
#include <stdio.h>
#define MAX 41

int main(int argc, char *argv[]) {
    FILE *plik;
    char slowo[MAX];

    if (argc != 2) {
        puts("podaj nazwe pliku");
        exit(2);
    }
    
    if ((plik=fopen(argv[1],"a+"))==NULL) {
        puts("nie mozna otworzyc");
        exit(3);
    }        
    puts("podaj slowo do zapisu albo # zeby skonczyc");
    while (fscanf(stdin,"%40s",slowo)!=EOF && slowo[0]!='#') {
        fprintf(plik,"%s\n",slowo);
    }
    rewind(plik);
    while((fscanf(plik,"%s\n",slowo))!=EOF) {
        puts(slowo);
    }
}
