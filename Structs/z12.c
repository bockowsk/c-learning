#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* funkcja(char * tekst, char c) {
   char *ktos="lala";
   return ktos; 
}

int main(int argc, char *argv[]) {
    char* (*funkcjap)(char *,char);
    funkcjap=funkcja;
    char *tekst=(*funkcjap)("chuj",'c');
    printf("%s",tekst);
}

