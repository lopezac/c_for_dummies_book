#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fh;

    fh = fopen("hello.txt", "w");
    if (fh == NULL) {
        puts("Can't open that file");
        exit(1);
    }
    fprintf(fh, "Hello beautiful world!\n");
    fclose(fh);
    puts("File written");

    return (0);
}
