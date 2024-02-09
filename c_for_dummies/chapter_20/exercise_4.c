#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *input;
    char *copy;
    size_t input_size; 

    input = (char *)malloc(sizeof(char) * 1024);
    if (input == NULL) {
        puts("Unable to allocate buffer.");
        exit(1);
    }

    puts("Type something:");
    fgets(input, 1024, stdin);
    puts("You wrote:");
    printf("%s", input);

    input_size = strlen(input) - 1;
    copy = (char *)malloc(sizeof(char) * input_size);
    strncpy(copy, input, input_size);
    puts("Copy:");
    printf("%s\n", copy);

    return (0);
}
