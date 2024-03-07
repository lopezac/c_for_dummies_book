#include "ex_3.h"

extern human person;

void fillstructure(void) {
    printf("Enter your name: ");
    fgets(person.name, 31, stdin);

    printf("Enter your age: ");
    scanf("%d", &person.age);
}
