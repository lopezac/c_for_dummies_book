#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
    int value, guess, limit;

    puts("Guess the secret number!\n");
    printf("From 0 up to: ");
    scanf("%d", &limit);

    printf("\nEnter your guess: ");
    scanf("%d", &guess);

    srand((unsigned)time(NULL));
    value = rand() % limit + 1;

    while (guess != value) {
        puts("WRONG");
        if (guess > value)
            puts("Too high");
        else
            puts("Too low");
        printf("\nEnter your guess: ");
        scanf("%d", &guess);
    }

    puts("\nYOU GUESSED IT! CONGRATULATIONS!");
    printf("The secret number was %d\n", value);
    
    return(0);
}