#include <stdio.h>

int main() {
    int nums[5] = { 25, 6, 1, 777, 3 };
    int x;

    for (x = 0; x < 5; x++)
        printf("Integer %d has address %p\n", nums[x], &nums[x]);

    return (0);
}
