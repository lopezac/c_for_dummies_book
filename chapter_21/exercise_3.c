#include <stdio.h>
#include <time.h>

int main() {
    time_t tictoc;
    time_t r = 946684800;

    time(&tictoc);
    // printf("The time is now %s", ctime(&tictoc));
    printf("Some random time is %s", ctime(&r));

    return (0);
}
