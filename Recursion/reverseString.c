#include <stdio.h>
#include <string.h>

void reverseString(char str[], int start, int end) {
    if (start >= end) return;  // Base case

    // Swap the characters
    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;

    reverseString(str, start + 1, end - 1);  // Recursive case
}

int main() {
    char str[] = "hello";
    reverseString(str, 0, strlen(str) - 1);
    printf("Reversed string is %s\n", str);
    return 0;
}
