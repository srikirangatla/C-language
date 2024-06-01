#include <stdio.h>

int main() {
    int var =10;
    int *ptr = &var;

    printf("var -> %d\n", var);
    printf("ptr -> %p\n", ptr);
    printf("*ptr -> %d\n", *ptr);

    return 0;
}

/*
var -> 10
ptr -> 0x7ffe50ba331c
*ptr -> 10
*/