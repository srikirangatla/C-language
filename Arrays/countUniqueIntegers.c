/*Write a function that returns the number of unique integers in an array.*/
#include <stdio.h>
#include <stdlib.h>

#define MAX 10000 // Define max limit for integers in the array

int countUniqueIntegers(int arr[], int n) {
    int *hashMap = (int *)calloc(MAX, sizeof(int)); // Hash map to count occurrences
    int uniqueCount = 0;

    for (int i = 0; i < n; i++) {
        if (hashMap[arr[i]] == 0) {
            uniqueCount++; // New unique number
        }
        hashMap[arr[i]]++;
    }

    free(hashMap); // Free allocated memory
    return uniqueCount;
}

int main() {
    int arr[] = {1, 2, 2, 3, 4, 4, 5}; // Unique numbers: 1, 2, 3, 4, 5
    int n = sizeof(arr) / sizeof(arr[0]);
    int uniqueCount = countUniqueIntegers(arr, n);
    printf("Number of unique integers: %d\n", uniqueCount); // Output: 5
    
    return 0;
}
