#include <stdio.h>

int main() {
    int a;
    char c;

    for (a = 1, c = 'Z'; a < 27; a++, c--)
        printf("%d%c\t", a, c);
    putchar('\n');
    return(0);
}