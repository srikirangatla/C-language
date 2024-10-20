#include <stdio.h>
#include <string.h>

int longestCommonSubstring(const char *str1, const char *str2) {
    int m = strlen(str1);
    int n = strlen(str2);
    int maxLen = 0;

    int dp[m + 1][n + 1];
    memset(dp, 0, sizeof(dp));

    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (str1[i - 1] == str2[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
                if (dp[i][j] > maxLen) {
                    maxLen = dp[i][j];
                }
            } else {
                dp[i][j] = 0;
            }
        }
    }

    return maxLen;
}

int main() {
    char str1[] = "abcde";
    char str2[] = "bcdef";
    printf("Length of longest common substring: %d\n", longestCommonSubstring(str1, str2));
    return 0;
}
