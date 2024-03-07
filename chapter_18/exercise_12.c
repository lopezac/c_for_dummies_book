#include <stdio.h>

int main() {
    int num;
    int *num_ptr;

    num = 5;
    num_ptr = &num;

    printf("num value %d, num address %p\n", num, &num);
    printf("num_ptr peek value %d, num_ptr value %p\n", *num_ptr, num_ptr);

    return (0);
}
