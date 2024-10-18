/* Find the number that appears only once in an array where every other number appears twice, using bitwise operators. */

#include <stdio.h>

int findUnique(int arr[], int n) {
    int result = 0;
    for (int i = 0; i < n; i++) {
        result ^= arr[i]; // XOR all elements
    }
    return result;
}

int main() {
    int arr[] = {2, 3, 5, 4, 5, 3, 4}; // 2 appears once, others appear twice
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int unique = findUnique(arr, n);
    printf("The number that appears only once is: %d\n", unique); // Output: 2
    
    return 0;
}
