#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    // zmienne
    FILE *wp;
    int ch;
    char odpowiedz[10];
    
    if (argc != 2) {
        puts("podaj jako argument nazwe pliku");
        exit(EXIT_SUCCESS);
    }
    if ((wp=fopen(argv[1],"w+x")) == NULL) {
        fputs("blad!\n",stderr);
    }
    //ch=getc(wp);
    
   // while(ch!=EOF) {
        //putc(ch,stdout);
        //ch=getc(wp);
        fgets(odpowiedz,10,stdin);
    //}

    fclose(wp);
}
