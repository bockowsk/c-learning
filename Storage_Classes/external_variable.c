#include <stdio.h>
int units=1;
void critic(void);

int main() {
    extern int units;
    puts("podaj: ");
    //scanf("%d",&units);
    units++;
    printf("%d\n",units);
    critic();
    printf("%d\n",units);
    return 0;
}

void critic(void) {
    units++;
    //scanf("%d",&units);
}
