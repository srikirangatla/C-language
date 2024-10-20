/*Find the first non-repeating character in a string.*/
#include <stdio.h>
#include <string.h>

#define CHAR_RANGE 256

char firstNonRepeatingChar(const char *str) {
    int count[CHAR_RANGE] = {0};
    
    // Store counts of each character
    for (int i = 0; str[i]; i++) {
        count[(unsigned char)str[i]]++;
    }

    // Find the first non-repeating character
    for (int i = 0; str[i]; i++) {
        if (count[(unsigned char)str[i]] == 1)
            return str[i];
    }

    return '\0';  // No non-repeating character
}

int main() {
    char str[] = "interview";
    char result = firstNonRepeatingChar(str);
    
    if (result != '\0') {
        printf("First non-repeating character: %c\n", result);
    } else {
        printf("No non-repeating characters found.\n");
    }
    
    return 0;
}
