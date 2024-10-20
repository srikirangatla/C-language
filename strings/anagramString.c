#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool areAnagrams(const char *str1, const char *str2) {
    if (strlen(str1) != strlen(str2)) {
        return false;
    }

    int charCount[256] = {0};  // Assumes ASCII characters

    // Count frequency of each character in str1
    for (int i = 0; str1[i]; i++) {
        charCount[(unsigned char)str1[i]]++;
    }

    // Decrease the frequency of each character in str2
    for (int i = 0; str2[i]; i++) {
        charCount[(unsigned char)str2[i]]--;
        if (charCount[(unsigned char)str2[i]] < 0) {
            return false;
        }
    }

    return true;
}

int main() {
    char str1[] = "listen";
    char str2[] = "silent";

    if (areAnagrams(str1, str2)) {
        printf("Strings are anagrams\n");
    } else {
        printf("Strings are not anagrams\n");
    }

    return 0;
}
