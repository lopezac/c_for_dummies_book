#include <stdio.h>
#include <math.h>

#ifndef M_PI
#define M_PI 3.14159
#endif

int main() {
    const float amplitude = 50;
    const float wavelength = 0.1;
    const int displayedChar = 'x';
    float graph, s, x;
    int pi_times;

    // for (graph = -M_PI/2; graph < M_PI/2; graph += wavelength) {
    for (pi_times = 0; pi_times <= 25; pi_times++) {
        for (graph = 0; graph < M_PI; graph += wavelength) {
            s = cos(graph);
            for (x = 0; x < s * amplitude; x++)
                putchar(displayedChar);
            for (; x > s * amplitude; x--)
                putchar(displayedChar);
            putchar('\n');
        }
    }

    return(0);
}