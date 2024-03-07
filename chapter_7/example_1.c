#include <stdio.h>

int main()
{
    int c1, c2, c3;
    
    printf("I'm waiting for a character: ");
    c1 = getchar();
    // printf("\nI'm waiting for another character: ");
    c2 = getchar();
    // printf("\nI'm waiting for another (again) character: ");
    c3 = getchar();
    printf("I waited for the '%c', '%c' and '%c' characters.\n", c1, c2, c3);
    return (0);
}