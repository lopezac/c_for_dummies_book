#include <stdio.h>

int main() {
    struct player{
        char name[32];
        int highscore;
        float hours;
    } xbox;
    // struct player xbox;

    printf("Enter the player's name: ");
    scanf("%s", xbox.name);

    printf("Enter the player's highscore: ");
    scanf("%d", &xbox.highscore);

    printf("Enter the  player's hours played: ");
    scanf("%f", &xbox.hours);

    printf("Player %s has highscore of %d, and played %.1f hours\n",
           xbox.name, xbox.highscore, xbox.hours);

    return(0);
}
