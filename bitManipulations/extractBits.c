/*Create a mask to extract the bits from position m to n (inclusive) of a number.*/
#include <stdio.h>

unsigned int extractBits(unsigned int num, int m, int n) {
    unsigned int mask = ((1U << (n - m + 1)) - 1) << m; // Create mask
    return (num & mask) >> m; // Isolate and shift the extracted bits
}

int main() {
    unsigned int num = 0b111110100011; // Example number
    int m = 3, n = 7;
    unsigned int extracted = extractBits(num, m, n);
    printf("Extracted bits from position %d to %d: %u\n", m, n, extracted); // Output will depend on num 20

    return 0;
}
