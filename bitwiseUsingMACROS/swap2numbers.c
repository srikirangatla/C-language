/* Create a macro to swap two numbers using XOR. */
#include <stdio.h>

#define SWAP(a, b)  { (a) ^= (b); (b) ^= (a); (a) ^= (b); }

int main() {
    int x = 10, y = 20;
    
    printf("Before swap: x = %d, y = %d\n", x, y);
    SWAP(x, y);
    printf("After swap: x = %d, y = %d\n", x, y);
    
    return 0;
}
