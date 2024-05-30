#include <stdio.h>

int largestNumber ( int a, int b, int c )
{
    int largest;

    if ( a >= b && a >= c )
        largest = a;
    else if ( b >= a && b >= c )
        largest = b;
    else
        largest = c;
    
    return largest;
}

int main ()
{
    int a, b, c, large;

    printf ("Enter any 3 numbers\n");
    scanf ("%d %d %d", &a, &b, &c);

    large = largestNumber(a, b, c);

    printf ("Largest Number is %d\n", large);

    return 0;
}

/*
output:
Enter any 3 numbers
10 20 15
Largest Number is 20giy
*/
