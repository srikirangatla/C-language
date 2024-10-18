/*Find the smallest positive integer that is not present in the given array.*/
#include <stdio.h>
#include <stdlib.h>

int findMissingPositive(int arr[], int n) {
    int *hashMap = (int *)calloc((unsigned int)n + 1, sizeof(int)); // Allocate space for tracking positives

    // Mark the presence of positive numbers in the range 1 to n
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0 && arr[i] <= n) {
            hashMap[arr[i]] = 1; // Mark present
        }
    }

    // Find the first missing positive integer
    for (int i = 1; i <= n; i++) {
        if (hashMap[i] == 0) {
            free(hashMap);
            return i; // Return the first missing positive
        }
    }

    free(hashMap);
    return n + 1; // If all numbers from 1 to n are present
}

int main() {
    int arr[] = {3, 4, -1, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int missing = findMissingPositive(arr, n);
    printf("The smallest positive integer missing is: %d\n", missing); // Output: 2
    
    return 0;
}
