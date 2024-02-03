#include <stdio.h>
#include <ctype.h>

int main() {
    const int size = 22;
    int inner, outer, temp, x;
    char string[] = "C Programming is fun!";
    
    printf("String before sort: %s\n", string);

    for (outer = 0; outer < size - 1; outer++) {
        for (inner = outer + 1; inner < size; inner++) {
            if (isspace(string[outer])) string[outer] = '\0';
            
            if (string[outer] > string[inner]) {
                temp = string[outer];
                string[outer] = string[inner];
                string[inner] = temp;
            }
        }
    }

    printf("String after sort: ");
    for (x = 0; x < size; x++)
        printf("%c", string[x]);
    putchar('\n');

    return(0);
}