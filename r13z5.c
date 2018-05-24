// pobiera 2 argumenty: znak i nazwe pliki i druguje pozniej tylko te litery
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    char linia[100];
    if (argc != 3) {
        fputs("ERROR!\n",stderr);
        exit(2);
    };
    char litera=argv[1][0];
    char *plik;
    plik=argv[2];
    FILE *file1;
    file1=fopen(plik,"r");
    while (fgets(linia,100,file1) != NULL ) {
        //printf("LINIA: %s\n",linia); 
        int i;
        for (i=0;i<100;i++) {
            if (linia[i] == litera) {
                putchar(linia[i]);
            }
        }
        puts("");
    }
    fclose(file1);

}
