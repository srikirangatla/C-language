/*Extract the sign bit from a number using masking.*/
#include <stdio.h>

int extractSignBit(int num) {
    return (num >> (sizeof(int) * 8 - 1)) & 1; // Extract the sign bit
}

int main() {
    int num = -5; // Example number
    int signBit = extractSignBit(num);
    printf("Sign bit of %d: %d\n", num, signBit); // Output: 1 (indicating negative)

    return 0;
}
