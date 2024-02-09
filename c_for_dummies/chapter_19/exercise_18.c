#include <stdio.h>

int main() {
    char *fruit[] = {
        "watermelon",
        "banana",
        "pear",
        "apple",
        "coconut",
        "grape",
        "blueberry",
    };
    int x;
    char *ptr;

    while (**fruit) {
        while (putchar( *(*fruit)++ ))
            ;
        putchar('\n');
    }

    return (0);
}
