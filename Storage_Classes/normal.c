#include <stdio.h>
int main() {
    double a=1.22;
    while (a<100000000.1) {
        a+=0.1;
    }
    puts("koniec");
}
