/*Given an array of integers, return the maximum product of any two distinct integers in the array.*/
#include <stdio.h>
#include <limits.h>

int maxProductOfTwo(int arr[], int n) {
    if (n < 2) return 0; // At least two numbers are required
    
    int max1 = INT_MIN, max2 = INT_MIN; // Two largest numbers

    for (int i = 0; i < n; i++) {
        if (arr[i] > max1) {
            max2 = max1; // Update second largest
            max1 = arr[i]; // Update largest
        } else if (arr[i] > max2) {
            max2 = arr[i]; // Update second largest
        }
    }

    return max1 * max2; // Return the product of the two largest numbers
}

int main() {
    int arr[] = {1, 10, 2, 6, 5, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int product = maxProductOfTwo(arr, n);
    printf("Maximum product of two distinct integers: %d\n", product); // Output: 60
    
    return 0;
}
