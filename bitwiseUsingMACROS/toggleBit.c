/*Create a macro to toggle (invert) a specific bit in a number.*/
#include <stdio.h>

#define TOGGLE_BIT(num, pos) ((num) ^ (1 << (pos)))

int main() {
    int num = 10;  // Binary: 1010
    int pos = 1;   // Toggle the bit at position 1 (from right)
    
    printf("Before toggling bit: %d\n", num);
    num = TOGGLE_BIT(num, pos);
    printf("After toggling bit: %d\n", num);  // Binary: 1000, Result: 8
    
    return 0;
}
