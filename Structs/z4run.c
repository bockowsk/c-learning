#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
   extern struct s1 kwartal;
   int ile=funkcja1(2,kwartal);
   printf("ILE: %i\n",ile);
   puts("koniec");
}
