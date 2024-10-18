/* Swap two integers without using a temporary variable, using bitwise operators. */

#include <stdio.h>

void swap(int *x, int *y) {
    *x = *x ^ *y;
    *y = *x ^ *y;
    *x = *x ^ *y;
}

int main (void) {
    int a = 5, b = 6;
    printf ("before swap -> a: %d\tb: %d\n", a, b);
    swap(&a, &b);
    printf ("after swap -> a: %d\tb: %d\n", a, b);
    return 0;
}