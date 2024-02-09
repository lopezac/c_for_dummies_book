#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct bot {
    int xpos;
    int ypos;
};

struct bot initialize(struct bot b);

int main() {
    const int SIZE = 5;
    struct bot robots[5];
    int x;

    srand((unsigned)time(NULL));

    for (x = 0; x < SIZE; x++) {
        robots[x] = initialize(robots[x]);
        printf("Robot %d: Coordinates: %d, %d\n", x + 1, robots[x].xpos,
               robots[x].ypos);
    }

    return (0);
}

struct bot initialize(struct bot b) {
    int x, y;

    x = rand() % 20;
    y = rand() % 20;
    b.xpos = x;
    b.ypos = y;
    
    return (b);
}
