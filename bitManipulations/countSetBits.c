/* Count the number of set bits (1s) in an integer. */
#include <stdio.h>

int countSetBits(int num) {
    int count = 0;
    while (num) {
        num = num & (num - 1); // Turn off the rightmost set bit
        count++;
    }
    return count;
}

int main() {
    int num = 29; // Binary: 11101, should return 4
    
    int result = countSetBits(num);
    printf("Number of set bits in %d: %d\n", num, result); // Output: 4
    
    return 0;
}
