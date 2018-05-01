#include <stdio.h>
#include <stdlib.h>

struct notatki {
    
    char temat[20];
    char notki[100];
    int ocena;
};

int main(int argc, char *argv[]) {
    struct notatki ansible={
        "ansible",
        "ansible nie jest taki fajny wcale",
        5
    }; 
    struct notatki ansible2;
    ansible2=ansible;
    ansible2.ocena=2;
    printf("notatki: %d\n",ansible.ocena);
    printf("notatki: %d\n",ansible2.ocena);
}
