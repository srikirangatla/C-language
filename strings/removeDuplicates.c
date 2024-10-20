#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void removeDuplicates(char *str) {
    bool charSet[256] = {false};
    int readIndex = 0, writeIndex = 0;
    
    while (str[readIndex]) {
        if (!charSet[(unsigned char)str[readIndex]]) {
            charSet[(unsigned char)str[readIndex]] = true;
            str[writeIndex++] = str[readIndex];
        }
        readIndex++;
    }
    
    str[writeIndex] = '\0';
}

int main() {
    char str[] = "programming";
    removeDuplicates(str);
    printf("String after removing duplicates: %s\n", str);
    return 0;
}
