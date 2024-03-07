#include <stdio.h>

int main() {
    char array[26];
    char *ptr;
    int x;

    ptr = array;

    // set alphabet on array
    for (x = 0; x < 26; x++)
        *ptr++ = 'A' + x;
    *ptr = '\0';

    // display array
    puts("Alphabet is");
    // ptr = array;
    // while (*ptr)
    //     putchar(*ptr++);
    for(ptr = array; *ptr; ptr++)
        putchar(*ptr);
    putchar('\n');

    return (0);
}
