#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "z3.h"

int main(int argc, char *argv[]) {
   extern struct s1 kwartal[];
   int ile=funkcja1(3,kwartal);
   printf("ILE: %i\n",ile);
   puts("koniec");
}
