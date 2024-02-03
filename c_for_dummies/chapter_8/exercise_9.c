#include <stdio.h>

int main()
{
    int code;

    printf("Enter the error code (1-3): ");
    scanf("%d", &code);
    switch(code) {
        case 1:
            puts("Drive fault");
            break;
        case 2:
            puts("Ilegal format");
            break;
        case 3:
            puts("Bad filename");
            break;
        default:
            puts("That's not, 1, 2, 3");
    }
    return(0);
}