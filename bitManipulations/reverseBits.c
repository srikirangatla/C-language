/* Reverse the bits of a number. */
#include <stdio.h>

unsigned int reverseBits(unsigned int num) {
    unsigned int reversed = 0;
    int bitCount = 4; //
    sizeof(num) * 8; // Total number of bits in the number (32 bits for unsigned int)
    
    for (int i = 0; i < bitCount; i++) {
        // Extract the least significant bit of 'num' and set it in 'reversed'
        reversed = (reversed << 1) | (num & 1);
        // Right shift 'num' to process the next bit
        num >>= 1;
    }
    
    return reversed;
}

int main() {
    unsigned int num = 13; // Binary: 1101
    unsigned int result = reverseBits(num);
    
    printf("Reversed bits of %u is: %u\n", num, result);
    return 0;
}
