/*Create a macro to clear a specific bit in a number.*/
#include <stdio.h>

#define CLEAR_BIT(num, pos) ((num) & ~(1 << (pos)))

int main() {
    int num = 10;  // Binary: 1010
    int pos = 1;   // Clear the bit at position 1 (from right)
    
    printf("Before clearing bit: %d\n", num);
    num = CLEAR_BIT(num, pos);
    printf("After clearing bit: %d\n", num);  // Binary: 1000, Result: 8
    
    return 0;
}
