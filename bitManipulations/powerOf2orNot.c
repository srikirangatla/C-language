/*Check if a number is a power of 2 using bitwise operators.*/
#include <stdio.h>

int isPowerOfTwo(int num) {
    if (num <= 0) {
        return 0; // Negative numbers and zero are not powers of 2
    }
    return (num & (num - 1)) == 0;
}

int main() {
    int num = 16; // 16 is a power of 2 (binary: 10000)
    if (isPowerOfTwo(num)) {
        printf("%d is a power of 2.\n", num);
    } else {
        printf("%d is not a power of 2.\n", num);
    }
    
    num = 18; // 18 is not a power of 2 (binary: 10010)
    if (isPowerOfTwo(num)) {
        printf("%d is a power of 2.\n", num);
    } else {
        printf("%d is not a power of 2.\n", num);
    }
    
    return 0;
}
