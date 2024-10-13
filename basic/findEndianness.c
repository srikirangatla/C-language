#include <stdio.h>

int main(void) {
    unsigned int num = 1;
    // Create a pointer to the first byte of the integer
    char *ch = (char *)&num;
    // If the first byte is 1, it's little-endian; otherwise, it's big-endian
    if (*ch)
        printf ("Little Endian\n");
    else
        printf ("Big Endian\n");
    return 0;
}