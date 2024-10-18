/*Find the two numbers in an array such that their XOR equals a given number.*/
#include <stdio.h>
#include <stdlib.h>

void findTwoXor(int arr[], int n, int targetXor) {
    int *hashMap = (int *)calloc(n, sizeof(int)); // Hash map for storage

    for (int i = 0; i < n; i++) {
        int required = arr[i] ^ targetXor; // Calculate the required number
        if (hashMap[required] != 0) {
            printf("Numbers are: %d and %d\n", arr[i], required);
            free(hashMap);
            return;
        }
        hashMap[arr[i]] = 1; // Store the current number
    }

    printf("No two numbers found with the given XOR.\n");
    free(hashMap);
}

int main() {
    int arr[] = {4, 7, 2, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int targetXor = 6; // 4 ^ 2 = 6
    findTwoXor(arr, n, targetXor);

    return 0;
}
