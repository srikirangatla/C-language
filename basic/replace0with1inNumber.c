#include <stdio.h>

int main()
{
    int num = 102301;
    int temp = num;
    int rem, result =0, place = 1;

    if ( num == 0 )
        return 1;

    while ( num > 0 )
    {
        rem = num % 10;
        if (!rem)
            rem = 1;

        result = result + rem * place;
        
        num /= 10;
        place *= 10;
    }

    printf("original: %d\tresult: %d\n", temp, result);

    return 0;
}
/*
original: 102301        result: 112311
*/