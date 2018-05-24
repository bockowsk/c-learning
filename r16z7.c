#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define DISPLAY(x) printf("name: "#x", value: %d, address: %p\n ",x,&x);
#define DEBUG 1

int main(int argc, char *argv[]) {
    int x=10;
    DISPLAY(x);
#if DEBUG == 1    
    puts("LALALA");
    puts("lelele");
    puts("ojejej");
#endif 
}
