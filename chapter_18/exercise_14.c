#include <stdio.h>

int main() {
    int age;
    float weight;
    int *age_ptr;
    float *weight_ptr;

    age_ptr = &age;
    *age_ptr = 19;

    weight_ptr = &weight;
    *weight_ptr = 69.5;

    printf("I'm %d years old!\n", age);
    printf("I weight %.1f kgs!\n", weight);

    return (0);
}
