/*Check if a given number is a palindrome in its binary representation.*/
#include <stdio.h>

int reverseBits(int num) {
    int reversed = 0;
    while (num) {
        reversed <<= 1;         // Left shift
        reversed |= (num & 1); // Add LSB to reversed
        num >>= 1;             // Right shift
    }
    return reversed;
}

int isBinaryPalindrome(int num) {
    return num == reverseBits(num); // Check if original and reversed are the same
}

int main() {
    int num = 9; // Binary: 1001, is a palindrome
    if (isBinaryPalindrome(num)) {
        printf("%d is a palindrome in binary.\n", num);
    } else {
        printf("%d is not a palindrome in binary.\n", num);
    }

    return 0;
}
