/*Toggle the nth bit of a number.*/
#include <stdio.h>

int toggleNthBit(int num, int n) {
    return num ^ (1 << n);
}

int main() {
    int num = 10; // Binary: 1010
    int n = 1;    // Toggle the 1st bit (counting from 0)
    
    int result = toggleNthBit(num, n);
    printf("After toggling %dth bit, number becomes: %d\n", n, result); // Output: 10 -> 1000 (8 in decimal)
    
    num = 8; // Binary: 1000
    result = toggleNthBit(num, n);
    printf("After toggling %dth bit, number becomes: %d\n", n, result); // Output: 8 -> 1010 (10 in decimal)
    
    return 0;
}
