#include <stdio.h>
#include <math.h>

int main ()
{
    unsigned int num, isPrime = 1;
    printf ("Enter a positive number\n");
    scanf ("%d", &num);

    if ( num <= 1)
    {
        isPrime = 0;
    }
    
    for ( int count = 2; count <= sqrt(num); count++ )
    {
        if ( num % count == 0 )
        {
            isPrime = 0;
            break;
        }   
    }
    if ( isPrime )
        printf ("Prime Number\n");
    else
        printf ("Not a Prime Number\n");
    return 0;
}
/*
Enter a positive number
9
Not a Prime Number
*/