#include <ctype.h>
#include <stdio.h>

int main() {
    char answer;

    printf("Would you like to blow up the moon? ");
    scanf("%c", &answer);
    answer = toupper(answer);
    if (answer == 'Y')
        puts("BOOM!");
    else if (answer == 'N')
        puts("The moon is safe buddy");
    else
        puts("Incorrect answer, so the moon exploded!");

    return(0);
}
