#include <stdio.h>

int main()
{
    char choice;

    puts("Meal Plans:");
    puts("A - Breakfast, Lunch, and Dinner");
    puts("B - Lunch and Dinner only");
    puts("C - Dinner only");
    printf("Your choice: ");
    scanf("%c", &choice);

    printf("You've opted for ");
    switch(choice) {
        case 'a':
            printf("Breakfast, ");
        case 'b':
            printf("Lunch and ");
        case 'c':
            printf("Dinner as your meal plan.\n");
            break;
        case 'A':
            printf("Breakfast, ");
        case 'B':
            printf("Lunch and ");
        case 'C':
            printf("Dinner as your meal plan\n");
            break;
        default:
            printf("not a valid option\n");
    }
    return(0);
}