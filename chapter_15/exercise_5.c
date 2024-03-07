#include <stdio.h>
#include <stdlib.h>

void sub(void);

int main() {
    puts("This programs quits before its done.");
    sub();
    puts("Or maybe not?");
    
    return (0);
}

void sub(void) {
    puts("Im gonna quit");
    exit (0);
}
