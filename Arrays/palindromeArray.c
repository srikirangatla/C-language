#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(int arr[], int n) {
    for (int i = 0; i < n/2; i++) {
        if(arr[i] != arr[n-1-i])
            return false;
    }
    return true;
}

int main() {
    int arr[] = {456, 56, 45, 56, 456};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("palindrome: %d\n",isPalindrome(arr, size));
    return 0;
}