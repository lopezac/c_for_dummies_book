#include <stdio.h>

int main() {
    int x;

    for (x = 5; x <= 100; x += 5)
        printf("%d ", x);
    putchar('\n');
    
    return(0);
}