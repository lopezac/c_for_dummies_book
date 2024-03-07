#include <stdio.h>

int main() {
    struct president {
        char name[40];
        int year;
    }; // first = { "Bernardino Rivadavia", 1821 };

    struct president first = { "Bernardino Rivadavia", 1821 },
                     second = { "Juan Justo de Urquiza", 1826 };
    // struct president second = { "Juan Justo de Urquiza", 1826 };

    printf("The first president was %s\n", first.name);
    printf("He was inaugurated in %d\n", first.year);

    return(0);
}
