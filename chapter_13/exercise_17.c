#include <stdio.h>

int getch(void);

int main() {
    char first, second;

    printf("Type your first initial: ");
    first = getch();

    printf("Type your second initial: ");
    second = getch();

    printf("Your initials are '%c' and '%c'\n", first, second);

    return(0);
}

int getch(void) {
    int ch;

    ch = getchar();
    while (getchar() != '\n')
        ;
    return(ch);
}
