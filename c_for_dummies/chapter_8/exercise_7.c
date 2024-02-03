#include <stdio.h>

int main()
{
    int coordinate;

    printf("Input target coordinate: ");
    scanf("%d", &coordinate);

    if (coordinate < -5 || coordinate > 5) {
        puts("Outta enough!");
    } else {
        puts("Target is inside of range");
    }

    return(0);
}