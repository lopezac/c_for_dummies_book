#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    float *temp, *kelvin;
    char *type;

    temp = (float *)malloc(sizeof(float));
    kelvin = (float *)malloc(sizeof(float));
    type = (char *)malloc(sizeof(char));
    if (temp == NULL || type == NULL || kelvin == NULL) {
        puts("Unable to allocate memory.");
        exit(1);
    }

    printf("Enter temperature outside: ");
    scanf("%f", temp);
    getchar(); // replace with famous getch func

    puts("Is temperature in Celsius or Fahrenheit?");
    printf("Enter c or f: ");
    scanf("%c", type);

    if (toupper(*type) == 'C')
        *kelvin = *temp + 273.15;
    else if (toupper(*type) == 'F')
        *kelvin = (*temp + 459.67) * (5.0 / 9.0);
    else {
        puts("Incorrect input.");
        exit(1);
    }

    printf("Temperature in Kelvin is %.1f\n", *kelvin);

    return (0);
}
