#include <stdio.h>
#include <stdlib.h>
#include <string.h>


union quantity {
    int count;
    float volume;
};

int main(int argc, char *argv[]) {
    union quantity i;
    i.volume=2.2;
}
