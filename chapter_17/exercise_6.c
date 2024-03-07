#include <stdio.h>
#include <ctype.h>

int main() {
    char input[64];
    int x = 0;

    printf("Type in text: ");
    fgets(input, 63, stdin);

    while (input[x] != '\n') {
        if (isalpha(input[x]))
            putchar(input[x] & 223);
        else
            putchar(input[x]);
        // putchar(isalpha(input[x]) ? (input[x] & 223) : (input[x]))
        x++;
    }
    putchar('\n');

    return (0);
}
