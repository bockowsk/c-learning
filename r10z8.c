#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TEKST(...) printf(__VA_ARGS__)

int main(int argc, char *argv[]) {
    // a
    int t[6]={1, 2, 4, 8, 16, 32};
    // b
    TEKST("%d\n",t[3]);
    // c 
    int tt[100]={[99]=-1};
    // d 
    int ttt[100]={[3]=101,[5]=101,[11]=101,[12]=101};
}
