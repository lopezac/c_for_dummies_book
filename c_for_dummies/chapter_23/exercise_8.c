#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    if (unlink("wow.bak") == -1) {
        puts("Error deleting file");
        exit(1);
    }

    puts("File killed");

    return (0);
}
