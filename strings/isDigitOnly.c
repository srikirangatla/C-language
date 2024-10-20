/*Write a function to check whether a string contains only digits.*/
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

bool isDigitOnly(const char *str) {
    for (int i = 0; str[i]; i++) {
        if (!isdigit(str[i])) {
            return false;
        }
    }
    return true;
}

int main() {
    char str[] = "12345";
    if (isDigitOnly(str)) {
        printf("String contains only digits\n");
    } else {
        printf("String contains non-digit characters\n");
    }
    return 0;
}
