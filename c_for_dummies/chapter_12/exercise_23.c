#include <stdio.h>

void showarray(int array[]);
void arrayinc(int array[]);

int main() {
    int n[] = { 2, 3, 5, 7, 11 };

    puts("Here's your array:");
    showarray(n);
    puts("Array after increasing 1 to every value:");
    arrayinc(n);
    showarray(n);

    return(0);
}

void showarray(int array[]) {
    int x;

    for (x = 0; x < 5; x++)
        printf("%d ", array[x]);
    putchar('\n');
}

void arrayinc(int array[]) {
    int x;
    
    for (x = 0; x < 5; x++)
        array[x] += 1;
}
