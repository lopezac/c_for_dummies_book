#include <stdio.h>

int main() {
    int count;

    for (count = 0; 1; count++) {
        if (count > 50)
            break;
        printf("%d ", count);
    }
    putchar('\n');
    return(0);
}