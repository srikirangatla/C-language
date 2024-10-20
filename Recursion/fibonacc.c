#include <stdio.h>

int fibonacci(int n) {
    if (n == 0) return 0;  // Base case 1
    if (n == 1) return 1;  // Base case 2
    return fibonacci(n - 1) + fibonacci(n - 2);  // Recursive case
}

int main() {
    int num = 6;
    printf("Fibonacci of %d is %d\n", num, fibonacci(num));
    return 0;
}
