#include <stdlib.h>
#include <stdio.h>

struct stats {
    int wins;
    int looses;
    int draws;
};

struct fighter {
    struct stats statystyki;
    float weight;
    float height;
    
};

int main(int argc, char *argv[]) {
    struct stats *s1=malloc(sizeof(struct stats));
    printf("adres structa to: %p, a wielkosc to: %d Bytes (mysle, ze 12).\n",s1,sizeof(struct stats));
}
