#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char *argv[]) {
    int *p1=(int *) malloc(100*sizeof(int));
    int *p2=(int *) calloc(100,sizeof(int));
    p1[0]=20;
    p1[1]=11;

    p2[5]=10;
    p2[11]=12;

    free(p1);
    free(p2);

}
