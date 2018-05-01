#include <stdio.h>
#include <string.h>
#define tekst3 "zycie zycie jest nowa"
#define maksymalny 10

char *skroc(char * text);

int main() {
    char *tekst1="dupa jasia nie wiem co";
    char tekst2[]="ale jaja";    
    puts(tekst1);
    puts(tekst2);
    puts(tekst3);
    char *tekst="12345";
    int rozmiar=strlen(tekst);
    printf("rozmiar powinien byc 5: %d\n",rozmiar);
    puts("----------------------------------------");
    char do_przerobki[20]="aaaaaaaaasbcaaaaaaa";
    char *pointer1=skroc(do_przerobki);
    puts(pointer1);
    char tekst4[20]="dupa jest";
    strcat(tekst4," jakas dziwna jak jest spoko");
    puts(tekst4);
}

// funkcja skracajaca string'a

char *skroc(char * text) {
    if (strlen(text) > maksymalny) {
        *(text+maksymalny)='\0';
    }
    return text;
}
