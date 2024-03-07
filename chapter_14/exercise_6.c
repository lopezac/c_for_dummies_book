#include <stdio.h>

int main() {
    struct scores {
        char name[32];
        int score;
    };
    struct scores player[4], temp;
    int x, y;

    // get data
    for (x = 0; x < 4; x++) {
        printf("Enter player %d name: ", x + 1);
        scanf("%s", player[x].name);
        printf("Enter their score: ");
        scanf("%d", &player[x].score);
        putchar('\n');
    }

    // sort data
    for (x = 0; x < 3; x++)
        for (y = x + 1; y < 4; y++)
            if (player[x].score < player[y].score) {
                temp = player[x];
                player[x] = player[y];
                player[y] = temp;
            }

    // print data
    printf("Player Info\n");
    printf("#\t%-15s\tScore\n", "Name");
    for (x = 0; x < 4; x++) {
        printf("%d\t%-15s\t%-5d\n", x+1, player[x].name, player[x].score);
    }
}
