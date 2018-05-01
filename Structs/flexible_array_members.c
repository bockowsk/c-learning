#include <stdio.h>
#include <stdlib.h>

struct flexible_struct {
    char *name;
    float elementy[];

};

int main(int argc, char *argv[]) {
    struct flexible_struct *fs;
    fs=malloc(sizeof(struct flexible_struct)+5*sizeof(float));
    char * imie="Olimp";
    fs->name=imie;
    fs->elementy[0]=22.45;
    printf("FLOAT: %-10f\n",fs->elementy[0]);
}
