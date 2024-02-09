#include <stdio.h>

char *binbin(unsigned n);

int main() {
    unsigned bshift, x;

    printf("Type a value 0 to 255: ");
    scanf("%u", &bshift);
    
    for (x = 0; x < 8; x++) {
        printf("%s %u\n", binbin(bshift), bshift);
        bshift >>= 1;
    }

    return (0);
}

char *binbin(unsigned n) {
    static char bin[17];
    int x;

    for (x = 0; x < 16; x++) {
        // 0x80   == 10000000
        // 0x8000 == 1000000000000000
        bin[x] = n & 0x8000 ? '1' : '0';
        n <<= 1;
    }
    bin[x] = '\0';

    return (bin);
}
