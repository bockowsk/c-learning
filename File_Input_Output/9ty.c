#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    char litera;
    FILE *plik;

    if ((plik=fopen(argv[1],"rb")) == NULL) {
        exit(2);
    }
    fseek(plik,9L,SEEK_SET);
    litera=getc(plik);
    printf("%c",litera);
}
