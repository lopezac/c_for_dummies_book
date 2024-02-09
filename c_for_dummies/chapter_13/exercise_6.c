#include <ctype.h>
#include <stdio.h>

int main() {
    char text[] = "A raNdom TexT iN A tExT EditOR!";
    int x;

    printf("Original: %s\n", text);

    for (x = 0; text[x]; x++) {
        if (islower(text[x]))
            text[x] = toupper(text[x]);
        else if (isupper(text[x]))
            text[x] = tolower(text[x]);
    }

    printf("Modified: %s\n", text);

    return(0);
}
