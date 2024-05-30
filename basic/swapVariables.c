#include <stdio.h>

#define SWAP(a, b) a ^= b ^= a

int main()
{
    int a=10, b=20;
    printf("Before swap\na: %d \t b: %d \n",a, b);
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("After swap\na: %d \t b: %d \n",a, b);
    return 0;
}

/*
Before swap
a: 10 	 b: 20 
After swap
a: 20 	 b: 10 
*/