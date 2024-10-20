/*Find the longest palindromic substring in a given string.*/
#include <stdio.h>
#include <string.h>

int expandAroundCenter(const char *str, int left, int right) {
    while (left >= 0 && right < strlen(str) && str[left] == str[right]) {
        left--;
        right++;
    }
    return right - left - 1;  // Length of palindrome
}

char* longestPalindrome(const char *str) {
    int start = 0, maxLength = 1;
    int len = strlen(str);

    for (int i = 0; i < len; i++) {
        int len1 = expandAroundCenter(str, i, i);     // Odd-length palindromes
        int len2 = expandAroundCenter(str, i, i + 1); // Even-length palindromes
        int currLength = (len1 > len2) ? len1 : len2;

        if (currLength > maxLength) {
            maxLength = currLength;
            start = i - (maxLength - 1) / 2;
        }
    }

    static char result[256];
    strncpy(result, &str[start], maxLength);
    result[maxLength] = '\0';
    return result;
}

int main() {
    char str[] = "babad";
    printf("Longest Palindrome: %s\n", longestPalindrome(str));
    return 0;
}
