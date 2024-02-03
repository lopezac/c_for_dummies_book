#include <stdio.h>

int main() {
    char sentence[] = "Random text";
    int index;

    index = 0;
    while (sentence[index] != '\0') {
        putchar(sentence[index]);
        index++;
    }
    putchar('\n');

    puts(sentence);

    printf("%s\n", sentence);

    return(0);
}