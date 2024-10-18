/*Set the nth bit of a number.*/

#include <stdio.h>

int setNthBit(int num, int n) {
    return num | (1 << n);
}

int main() {
    int num = 10; // Binary: 1010
    int n = 0; // Set the 1st bit (counting from 0)
    
    int result = setNthBit(num, n);
    printf("After setting %dth bit, number becomes: %d\n", n, result); // Output: 1010 -> 1011 (11 in decimal)
    
    return 0;
}
