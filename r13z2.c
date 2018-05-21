#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[]) {
    char ch;
    FILE *fp;
    if (argc < 2)
        exit(2);
    if ( (fp = fopen(argv[1], "r")) == NULL)
        exit(1);
    while ( (ch= getc(fp)) != EOF )
        if( isdigit(ch) )
            putchar(ch);
    fclose (fp);
    return 0;

}
