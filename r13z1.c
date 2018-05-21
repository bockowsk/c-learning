#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    FILE *wp;
    int k;
    wp = fopen("zelatyna","w");
    for (k=0;k<30;k++) {
        fputs("Nanette je zelatyne.",wp);
    }
    fclose(wp);
    return 0;

}
