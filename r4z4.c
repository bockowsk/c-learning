#include <stdio.h>
#define B booboo
#define X 10
int main(int argc)
{
    int age;
    char name[20];
    printf("Please enter your first name.");
    scanf("%s", name);
    printf("All right, %s, what's your age?\n", name);
    scanf("%d", &age);
    int xp;
    xp = age;
    printf("That's a %s! You must be at least %d.\n", name, xp);
    return 0;
}
