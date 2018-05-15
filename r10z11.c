#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// t
void funkcja1a(double*,int);
void funkcja1b(int,double [*]);
// c
void funkcja2a(short (*)[30],int);
void funkcja2b(int,int,short [*][*]);
// s
void funkcja3a(int,long (*)[10][15]);
void funkcja3b(int,int,int,long [*][*][*]);

int main(int argc, char *argv[]) {
    double t[20];
    short c[10][30];
    long s[5][10][15];
    // wywolania
    funkcja1a(t,20);
    funkcja1b(20,t);
    funkcja2a(c,10);
    funkcja2b(10,30,c);
    funkcja3a(5,s);
    funkcja3b(5,10,15,s);

}

void funkcja1a(double *t,int ile) {
    *t=2.4;
}
void funkcja1b(int i,double d[i]) {
    int a;
}
void funkcja2a(short (*wskaznik)[30], int ile) {
    int b;
}
void funkcja2b(int ile1,int ile2,short tab[ile1][ile2]) {
    int c;
}
void funkcja3a(int i,long (*t)[10][15]) {
    int d;
}
void funkcja3b(int i1,int i2,int i3,long t[i1][i2][i3]) {
    int e;
}
