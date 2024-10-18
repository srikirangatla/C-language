/* Clear the rightmost set bit of a number. */

#include <stdio.h>

int clearRightmostSetBit(int num) {
    return num & (num - 1);
}

int main() {
    int num = 12; // Binary: 1100, after clearing the rightmost set bit -> 1000 (8)
    int result = clearRightmostSetBit(num);
    printf("After clearing the rightmost set bit, %d becomes: %d\n", num, result);
    
    num = 7; // Binary: 0111, after clearing the rightmost set bit -> 0110 (6)
    result = clearRightmostSetBit(num);
    printf("After clearing the rightmost set bit, %d becomes: %d\n", num, result);
    
    return 0;
}
