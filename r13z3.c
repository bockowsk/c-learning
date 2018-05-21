#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    FILE *plik1,*plik2;
    char ch;

    plik1=fopen("./plik1","r");
    plik2=fopen("./plik2","w");

    ch=getc(plik1);
    fprintf(plik2,"%c\n",ch);
    putc(ch,plik2);
    fclose(plik1);
    fclose(plik2);

}
