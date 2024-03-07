#include <stdio.h>

int main() {
    printf("%%9s me = %9s me\n", "meet");
    printf("%%8s me = %8s me\n", "meet");
    printf("%%7s me = %7s me\n", "meet");
    printf("%%6s me = %6s me\n", "meet");
    printf("%%5s me = %5s me\n", "meet");
    printf("%%4s me = %4s me\n", "meet");

    putchar('\n');
    printf("%%-9s me = %-9s me\n", "meet");
    printf("%%-8s me = %-8s me\n", "meet");
    printf("%%-7s me = %-7s me\n", "meet");
    printf("%%-6s me = %-6s me\n", "meet");
    printf("%%-5s me = %-5s me\n", "meet");
    printf("%%-4s me = %-4s me\n", "meet");

    return(0);
}
