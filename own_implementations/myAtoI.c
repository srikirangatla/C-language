#include <stdio.h>
#include <limits.h>

int myAtoi(const char *str) {
    int sign = 1, result = 0, i = 0;

    // Skip whitespaces
    while (str[i] == ' ') {
        i++;
    }

    // Handle sign
    if (str[i] == '-' || str[i] == '+') {
        sign = (str[i] == '-') ? -1 : 1;
        i++;
    }

    // Convert digits to integer
    while (str[i] >= '0' && str[i] <= '9') {
        if (result > (INT_MAX - (str[i] - '0')) / 10) {
            return (sign == 1) ? INT_MAX : INT_MIN; // Overflow check
        }
        result = result * 10 + (str[i] - '0');
        i++;
    }

    return result * sign;
}

int main() {
    char str[] = "   -12345";
    printf("Converted integer: %d\n", myAtoi(str));
    return 0;
}
