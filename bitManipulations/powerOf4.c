/*Implement a function to check if a number is a power of 4.*/
#include <stdio.h>

int isPowerOfFour(int num) {
    return (num > 0) && !(num & (num - 1)) && !((num - 1) % 3); // Check if power of 2 and (num-1) % 3 == 0
}

int main() {
    int num = 16; // 4^2
    if (isPowerOfFour(num)) {
        printf("%d is a power of 4.\n", num);
    } else {
        printf("%d is not a power of 4.\n", num);
    }
    
    return 0;
}
