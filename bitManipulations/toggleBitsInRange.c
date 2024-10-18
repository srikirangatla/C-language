/*Toggle bits from position m to n in a given number.*/
#include <stdio.h>

unsigned int toggleBitsInRange(unsigned int num, int m, int n) {
    unsigned int mask = ((1U << (n - m + 1)) - 1) << m; // Create mask
    return num ^ mask; // Toggle the bits
}

int main() {
    unsigned int num = 0b11001111; // Example number
    int m = 2, n = 5;
    unsigned int result = toggleBitsInRange(num, m, n);
    printf("Number after toggling bits from %d to %d: %u\n", m, n, result); // Output will depend on num

    return 0;
}
