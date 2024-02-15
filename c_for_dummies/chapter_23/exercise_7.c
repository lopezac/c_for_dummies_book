#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *original, *copy;
    int c;

    original = fopen("wow", "r");
    copy = fopen("wow.bak", "w");
    if (!original || !copy) {
        puts("File error");
        exit (1);
    }

    while ((c = fgetc(original)) != EOF)
        fputc(c, copy);
    puts("File duplicated");

    return (0);
}
