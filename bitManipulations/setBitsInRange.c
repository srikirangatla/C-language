/*Set bits from position m to n to 1 in a given number.*/
#include <stdio.h>

unsigned int setBitsInRange(unsigned int num, int m, int n) {
    unsigned int mask = ((1U << (n - m + 1)) - 1) << m; // Create mask for the range
    return num | mask; // Set the bits to 1
}

int main() {
    unsigned int num = 0b11000000; // Example number
    int m = 2, n = 5;
    unsigned int result = setBitsInRange(num, m, n);
    printf("Number after setting bits from %d to %d: %u\n", m, n, result); // Output will depend on num

    return 0;
}
