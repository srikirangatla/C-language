/*Determine the number of times you need to shift a number left to overflow a 32-bit integer.*/
#include <stdio.h>
#include <limits.h>

int countShiftsUntilOverflow(unsigned int num) {
    int count = 0;
    unsigned int maxInt = UINT_MAX; // Maximum value for unsigned int

    while (num <= maxInt >> 1) {
        num <<= 1; // Shift left
        count++;
    }

    return count;
}

int main() {
    unsigned int num = 1; // Starting number
    int shifts = countShiftsUntilOverflow(num);
    printf("Number of shifts until overflow: %d\n", shifts); // Output: 31
    
    return 0;
}
