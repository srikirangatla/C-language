/* Create a macro to check if a number is even or odd. */
#include <stdio.h>

#define IS_ODD(x) ((x) & 1)
#define IS_EVEN(x) (!((x) & 1))

int main() {
    int num = 5;
    
    if (IS_ODD(num)) {
        printf("%d is odd.\n", num);
    } else {
        printf("%d is even.\n", num);
    }

    num = 8;
    
    if (IS_EVEN(num)) {
        printf("%d is even.\n", num);
    } else {
        printf("%d is odd.\n", num);
    }
    
    return 0;
}
