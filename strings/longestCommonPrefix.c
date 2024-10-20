#include <stdio.h>
#include <string.h>

char* longestCommonPrefix(char **strs, int n) {
    if (n == 0) return "";
    
    for (int i = 0; strs[0][i]; i++) {
        for (int j = 1; j < n; j++) {
            if (strs[j][i] != strs[0][i]) {
                strs[0][i] = '\0';  // Truncate the first string at mismatch
                return strs[0];
            }
        }
    }
    return strs[0];
}

int main() {
    char *strs[] = {"interview", "integration", "internet"};
    int n = sizeof(strs) / sizeof(strs[0]);
    
    printf("Longest common prefix: %s\n", longestCommonPrefix(strs, n));
    return 0;
}
