#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    int imate=2;
    long shot=54321L;
    char grade='A';
    float log=2.78;

    printf("The odds against the %d were %ld to 1.\n", imate, shot);
    printf("A score of %.2f is not an %c grade.\n", log, grade);
}
