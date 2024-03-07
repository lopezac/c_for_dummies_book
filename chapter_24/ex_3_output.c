#include "ex_3.h"

extern human person;

void printstructure(void) {
    printf("\nYou are %s", person.name);
    printf("And you are %d years old.\n", person.age);
}
