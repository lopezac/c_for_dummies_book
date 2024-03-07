#include <stdio.h>

int main(int argc, char *argv[]) {
    int x;

    printf("You typed %d arguments.\n", argc);
    for (x = 0; x < argc; x++)
        printf("Argument %d is %s.\n", x + 1, argv[x]);

    return (0);
}
