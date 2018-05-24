#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE1 100
#define SIZE2 300

int main(int argc, char *argv[]) {
    double data1[SIZE1];
    int i;
    for (i=0;i<SIZE1;i++) {
        data1[SIZE1]=(double)i;
    }
    double data2[SIZE2];
    for (i=0;i<SIZE2;i++) {
        data2[i]=i+0.25;
    }
//    for (i=0;i<SIZE2;i++) {
//        printf("%f, ",data2[i]);
//    }
    puts("");
    puts("poczatkowe");
    for (i=0;i<SIZE1;i++) {
        printf("%f,",data1[i]);
    }
    puts("");
    puts("kopia pierwszych 100");
    memcpy(data1,data2,100*sizeof(double));
    for (i=0;i<SIZE1;i++) {
        printf("%f,",data1[i]);
    }
    puts("");

    puts("last 100!");
    memcpy(data1,(data2+200),100*sizeof(double));
    for (i=0;i<SIZE1;i++) {
        printf("%f, ",data1[i]);
    }

}
