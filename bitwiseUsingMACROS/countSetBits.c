/*Create a macro to count the number of set bits in a number.*/
#include <stdio.h>

#define COUNT_SET_BITS(x) ({ \
    int count = 0, n = (x); \
    while (n) { \
        count += n & 1; \
        n >>= 1; \
    } \
    count; \
})

int main() {
    int num = 29;  // Binary: 11101, set bits: 4
    printf("Number of set bits in %d: %d\n", num, COUNT_SET_BITS(num));
    
    return 0;
}
    