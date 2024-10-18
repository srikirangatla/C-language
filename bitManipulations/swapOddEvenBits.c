/*Given an integer, swap all odd bits with even bits.*/
#include <stdio.h>

unsigned int swapOddEvenBits(unsigned int num) {
    // Mask for odd bits (0xAAAAAAAA) and even bits (0x55555555)
    unsigned int oddBits = num & 0xAAAAAAAA;
    unsigned int evenBits = num & 0x55555555;

    // Shift odd bits right and even bits left
    oddBits >>= 1;
    evenBits <<= 1;

    // Combine the two results
    return (oddBits | evenBits);
}

int main() {
    unsigned int num = 23; // Binary: 00010111
    unsigned int result = swapOddEvenBits(num);
    printf("Number after swapping odd and even bits: %u\n", result); // Output: 43 (Binary: 00101011)

    return 0;
}
