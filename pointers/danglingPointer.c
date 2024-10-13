#include <stdio.h>
#include <stdlib.h>

int main (void) {
    int *ptr = (int *)malloc(sizeof(int));
    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    // Assign a value to the allocated memory
    *ptr = 42;
    printf ("value of pointer before free: %d\n", *ptr);
    free(ptr);
    printf ("value of pointer after free: %d\n", *ptr);
    ptr = NULL;
    return 0;
}
/* 
output:
value of pointer before free: 42
value of pointer after free: 9639408
*/