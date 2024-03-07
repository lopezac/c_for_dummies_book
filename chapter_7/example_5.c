#include <stdio.h>

int main()
{
    char firstName[15];
    char lastName[15];

    printf("Type your first name: ");
    fgets(firstName, 15, stdin);
    // scanf("%s", firstName);

    printf("Type your last name: ");
    fgets(lastName, 15, stdin);
    // scanf("%s", lastName);

    printf("Pleased to meet you, %s %s.\n", firstName, lastName);
    return(0);
}