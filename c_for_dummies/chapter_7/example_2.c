#include <stdio.h>

int main()
{
    int ch;

    printf("Press enter: ");
    getchar();
    ch = 'H';
    putchar(ch);
    ch = 'i';
    putchar(ch);
    putchar('!');
    putchar('\n');
    return(0);
}