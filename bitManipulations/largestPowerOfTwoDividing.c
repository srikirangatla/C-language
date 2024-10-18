/*Find the largest power of 2 that divides a given number.*/
#include <stdio.h>

int largestPowerOfTwoDividing(int num) {
    return num & -num; // Isolate the rightmost set bit  -num = 2's complement
}

int main() {
    int num = 40; // Binary: 101000
    int result = largestPowerOfTwoDividing(num);
    printf("Largest power of 2 that divides %d is: %d\n", num, result); // Output: 8

    return 0;
}
