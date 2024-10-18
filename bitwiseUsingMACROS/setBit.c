/*Create a macro to set a specific bit in a number.*/
#include <stdio.h>

#define SET_BIT(num, pos) ((num) | (1 << (pos)))

int main() {
    int num = 8;  // Binary: 1000
    int pos = 1;  // Set the bit at position 1 (from right)
    
    printf("Before setting bit: %d\n", num);
    num = SET_BIT(num, pos);
    printf("After setting bit: %d\n", num);  // Binary: 1010, Result: 10
    
    return 0;
}
