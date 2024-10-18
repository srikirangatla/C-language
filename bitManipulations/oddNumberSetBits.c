/* Determine if a given integer has an odd number of set bits (1s). */

#include <stdio.h>

int hasOddNumberOfSetBits(int num) {
    int count = 0;
    while (num) {
        count ^= (num & 1); // XOR the least significant bit
        num >>= 1;          // Right shift the number to process the next bit
    }
    return count; // Return 1 if the count is odd, 0 if even
}

int main() {
    int num = 13; // Binary: 1101, odd number of set bits (3)
    if (hasOddNumberOfSetBits(num)) {
        printf("%d has an odd number of set bits.\n", num);
    } else {
        printf("%d has an even number of set bits.\n", num);
    }
    
    num = 14; // Binary: 1110, even number of set bits (3)
    if (hasOddNumberOfSetBits(num)) {
        printf("%d has an odd number of set bits.\n", num);
    } else {
        printf("%d has an even number of set bits.\n", num);
    }
    
    return 0;
}
