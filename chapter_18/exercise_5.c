#include <stdio.h>

int main() {
    struct robot {
        char name[5];
        int alive;
        int xpos;
        int ypos;
        int strength;
    };

    printf("The evil robot struct size is %lu\n", sizeof(struct robot));

    return (0);
}
