#include <stdio.h>

void limit(int stop);
int verify(int stop);

int main() {
    int s;

    printf("Enter a stopping value (0-100): ");
    scanf("%d", &s);
    if (verify(s))
        puts("You won buddy!");
    else
        puts("You disrespected me, now you gonna pay the consequences >:)");
    return(0);
}

int verify(int stop) {
    return (stop >= 0 && stop <= 100);
}

void limit(int stop) {
    int x;

    for (x = 0; x <= 100; x++) {
        printf("%d ", x);
        if (x == stop) {
            puts("\nYou won!");
            return;
        }
    }
    puts("\nI  won!");
}