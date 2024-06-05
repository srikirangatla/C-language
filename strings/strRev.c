#include <stdio.h>

int strLen(const char *str) {
    int len = 0;
    while (*str != '\0') {
        len++;
        str++;
    }
    return len;
}

void revString(char *str) {
    int len = strLen(str);
    for (int i = 0; i < len / 2; i++) {
        str[i] ^= str[len-i-1];
        str[len-i-1] ^= str[i];
        str[i] ^= str[len-i-1];
    }
}

int main() {
    char str[] = "Hello World";
    printf("original string: %s\n", str);
    revString(str);
    printf("reverse string: %s\n", str);
    return 0;
}

/*
original string: Hello World
reverse string: dlroW olleH
*/