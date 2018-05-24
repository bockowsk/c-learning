#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define FEET 4
#define POD FEET + FEET
#define SIX 6
#define NEW(x) x + 5

int main(int argc, char *argv[]) {
    int plort = FEET * POD; // 20
    printf("%d\n",plort);
    int nex = SIX;
    printf("%d\n",nex);
    int y=NEW(y);
    printf("%d\n",y);
}
