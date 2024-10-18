/*Find the position of the rightmost set bit in a number.*/
#include <stdio.h>

int rightmostSetBitPosition(int num) {
    if (num == 0) {
        return -1; // No set bit if number is 0
    }
    int position = 1; // Start at position 1 (rightmost bit is position 1)
    while (!(num & 1)) {
        num >>= 1;   // Right shift until we find the set bit
        position++;  // Increment the position counter
    }
    return position;
}

int main() {
    int num = 18; // Binary: 10010, rightmost set bit is at position 2
    int result = rightmostSetBitPosition(num);
    
    if (result != -1) {
        printf("The rightmost set bit is at position: %d\n", result);
    } else {
        printf("No set bits found.\n");
    }
    
    return 0;
}
