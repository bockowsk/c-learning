#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    // zmienne
    FILE *wp;
    int ch;
    
    if (argc != 2) {
        puts("podaj jako argument nazwe pliku");
        exit(EXIT_SUCCESS);
    }
    if ((wp=fopen(argv[1],"r")) == NULL) {
        fputs("blad!",stderr);
    }
    ch=getc(wp);
    
    while(ch!=EOF) {
        putc(ch,stdout);
        ch=getc(wp);
    }

    close(wp);
}
