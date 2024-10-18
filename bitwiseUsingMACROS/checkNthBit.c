/*Create a macro to check if the nth bit is set in a number.*/
#include <stdio.h>

#define IS_BIT_SET(num, pos) (((num) & (1 << (pos))) != 0)

int main() {
    int num = 10;  // Binary: 1010
    int pos = 3;   // Check if the bit at position 3 (from right) is set
    
    if (IS_BIT_SET(num, pos)) {
        printf("The bit at position %d is set in %d.\n", pos, num);
    } else {
        printf("The bit at position %d is not set in %d.\n", pos, num);
    }
    
    return 0;
}
