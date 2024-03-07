#include <stdio.h>

int main()
{
    const int MAX_SIZE = 4;
    char name[MAX_SIZE];

    printf("Who are you? ");
    fgets(name, MAX_SIZE, stdin);
    printf("Glad to meet you, %s\n", name);
    return(0);
}