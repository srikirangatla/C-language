#include <stdio.h>

void increment(void) {
    static int var = 0;
    printf("var: %d\n", var);
    var++;
}

int main(void) {
    increment();
    increment();
    increment();
    return 0;
}

/*
var: 0
var: 1
var: 2
*/