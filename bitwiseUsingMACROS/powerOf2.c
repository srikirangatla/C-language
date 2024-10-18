/* Create a macro to check if a number is a power of 2. */
#include <stdio.h>

#define IS_POWER_OF_TWO(x) ((x) > 0 && !((x) & ((x) - 1)))

int main() {
    int num = 16;
    
    if (IS_POWER_OF_TWO(num)) {
        printf("%d is a power of 2.\n", num);
    } else {
        printf("%d is not a power of 2.\n", num);
    }
    
    num = 18;
    
    if (IS_POWER_OF_TWO(num)) {
        printf("%d is a power of 2.\n", num);
    } else {
        printf("%d is not a power of 2.\n", num);
    }
    
    return 0;
}
