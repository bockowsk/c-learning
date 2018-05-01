#include <stdio.h>
int main(int argc, char *argv[]) {

    int tablica1[5]={1,2,3,4,5};
    float tablica2[5]={1.1, 2.2, 3.3, 4.4, 5.5};
    
    FILE *plik1=fopen(argv[1],"a");
    fwrite(tablica1,sizeof(int),5,plik1);
    fclose(plik1);
}
