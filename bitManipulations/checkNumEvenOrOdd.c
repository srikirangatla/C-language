/* Check if a number is even or odd using bitwise operators. */

#include <stdio.h>

void checkEvenOdd(int num) {
    if (num & 1)
        printf("%d id Odd\n", num);
    else
        printf("%d is Even\n", num);
}

int main (void) {
    int num1 = 5;
    checkEvenOdd(num1); //output: odd

    int num2 = 10;
    checkEvenOdd(num2); //outpu: even

    return 0;
}