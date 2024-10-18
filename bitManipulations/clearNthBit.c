/*Clear the nth bit of a number.*/
#include <stdio.h>

int clearNthBit(int num, int n) {
    return num & ~(1 << n);
}

int main() {
    int num = 10; // Binary: 1010
    int n = 1;    // Clear the 1st bit (counting from 0)
    
    int result = clearNthBit(num, n);
    printf("After clearing %dth bit, number becomes: %d\n", n, result); // Output: 10 -> 1000 (8 in decimal)
    
    return 0;
}
