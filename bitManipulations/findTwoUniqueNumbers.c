/*Find the two non-repeating elements in an array where every other element appears twice.*/
#include <stdio.h>

void findTwoUniqueNumbers(int arr[], int n) {
    int xorResult = 0;
    for (int i = 0; i < n; i++) {
        xorResult ^= arr[i]; // Step 1: XOR all elements
    }

    // Step 2: Find a set bit (we can use rightmost set bit)
    int setBit = xorResult & -xorResult;

    int unique1 = 0, unique2 = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] & setBit) {
            unique1 ^= arr[i]; // Group with the set bit
        } else {
            unique2 ^= arr[i]; // Group without the set bit
        }
    }

    printf("The two unique numbers are: %d and %d\n", unique1, unique2);
}

int main() {
    int arr[] = {4, 3, 4, 5, 6, 3}; // 5 and 6 appear only once
    int n = sizeof(arr) / sizeof(arr[0]);
    findTwoUniqueNumbers(arr, n);
    
    return 0;
}
