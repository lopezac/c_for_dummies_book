#include <stdio.h>

int main() {
    float degrees, radians;

    printf("Enter an angle in radians: ");
    scanf("%f", &radians);
    degrees = radians * (1 / 0.01745329);
    printf("%.2f radians is equal to %.2f degrees\n", radians, degrees);

    return(0);
}