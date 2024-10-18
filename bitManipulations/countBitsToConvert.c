/*Count the number of bits required to convert integer A to integer B.*/
#include <stdio.h>

int countBitsToConvert(int A, int B) {
    int count = 0;
    int xorResult = A ^ B;

    while (xorResult) {
        count += xorResult & 1; // Count set bits
        xorResult >>= 1;        // Right shift
    }
    
    return count;
}

int main() {
    int A = 29; // Binary: 11101
    int B = 15; // Binary: 01111
    int bitsNeeded = countBitsToConvert(A, B);
    printf("Bits required to convert %d to %d: %d\n", A, B, bitsNeeded); // Output: 2

    return 0;
}
