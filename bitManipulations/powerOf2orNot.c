#include <stdio.h>
#include <stdbool.h>

static bool isPowerOf2(int num){
    if(num <= 0)
        return false;
    // A power of 2 has exactly one bit set, so n & (n - 1) should be 0
    return (num & (num - 1)) == 0;
}

int main (void) {
    int number;
    printf ("Enter any number\r\n");
    scanf ("%d", &number);
    if (isPowerOf2(number))
        printf("power of 2\r\n");
    else
        printf("not power of 2\r\n");

    return 0;
}
/*
output:
Enter any number
16
power of 2
*/