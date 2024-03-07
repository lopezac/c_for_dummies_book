#include <stdio.h>

int main() {
    enum { monday = 1, tuesday, wednesday, thursday, friday, saturday, sunday };
    int value;

    printf("Enter a weekday number, 1 - 7: ");
    scanf("%d", &value);

    switch (value) {
    case monday:
        puts("Monday");
        break;
    case tuesday:
        puts("Tuesday");
        break;
    case wednesday:
        puts("Wednesday");
        break;
    case thursday:
        puts("Thursday");
        break;
    case friday:
        puts("Friday");
        break;
    case saturday:
        puts("Saturday");
        break;
    case sunday:
        puts("Sunday");
        break;
    default:
        puts("Incorrect weekday");
    }

    return (0);
}
