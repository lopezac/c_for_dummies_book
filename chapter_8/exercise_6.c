#include <stdio.h>

int main()
{
    int a, b;

    a = 6;

    printf("Please enter a value: ");
    scanf("%d", &b);

    if (a > b)
    {
        printf("%d is greater than %d\n", a, b);
    }
    else if (a < b)
    {
        printf("%d is minor than %d\n", a, b);
    }
    else
    {
        printf("%d is equal to %d\n", a, b);
    }
}