#include <stdio.h>

int main() {
    char answer;

    puts("Do you want to continue (Y/N): ");
    answer = getchar();

    if (answer == 'Y' || answer == 'y') {
        printf("You are in! :)\n");
    } else if (answer == 'N' || answer == 'n') {
        printf("You are out :(\n");
    } else {
        printf("Answer not understood\n");
    }
}