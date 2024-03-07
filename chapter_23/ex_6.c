#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *test;

    test = fopen("blorfus", "w");
    if (!test) {
        puts("Unable to create file");
        exit (1);
    }
    fclose(test);

    puts("File created");
    if (rename("blorfus", "wow") == -1) {
        puts("Unable to rename file");
        exit (1);
    }
    puts("File renamed");

    return (0);
}
