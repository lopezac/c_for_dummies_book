#include <stdio.h>
#include <stdlib.h>

int main() {
    int *nums;
    
    nums = (int *)malloc(sizeof(int) * 3);

    *nums++ = 25;
    *nums++ = 44;
    *nums = 9;

    nums -= 2;
    while (*nums)
        printf("%d\n", *nums++);

    return (0);
}
