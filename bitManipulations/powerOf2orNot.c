#include <stdio.h>
#include <stdbool.h>

static bool checkPowerOf2(int num){
    if(num <= 0)
        return 1;
    if((num & (num - 1)) == 0)
        return 0;
    else
        return 1;
}

int main (void) {
    int number;
    printf ("Enter any number\r\n");
    scanf ("%d", &number);
    if (!checkPowerOf2(number))
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