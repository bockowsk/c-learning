#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TEKST(...) printf(__VA_ARGS__)
struct name {
    char first[20];
    char last[20];
};

struct bem {
    int limbs;
    struct name title;
    char type[30];
};

void print_struct(struct bem *b);
struct bem *pb;
struct bem deb={
    6,
    {"ktos", "jakis" },
    "jakis typ"
};


int main(int argc, char *argv[]) {
    pb=&deb;
    TEKST("%d\n",deb.limbs);  // 6
    TEKST("%s\n",pb->type); // "jakis typ"
    TEKST("%s\n",pb->type+2); // nie wiem? 3cia litera eee?
    TEKST("%s\n",deb.title.last);
    TEKST("%s\n",pb->title.last);
    print_struct(pb);

}

void print_struct(struct bem *b) {
    TEKST("%s and %s and %i and %s",b->title.first, b->title.last, b->limbs, b->type);
}
