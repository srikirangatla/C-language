#include <stdio.h>

void reverse_arr(int arr[], int n) {
    for (int i = 0; i < n/2; i++) {
        int tmp = arr[i];
        arr[i] = arr[n-1-i];
        arr[n-1-i] = tmp;
    }
    printf("Reverse Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {12, 18, 45, 56, 456};
    int size = sizeof(arr) / sizeof(arr[0]);
    reverse_arr(arr, size);
    return 0;
}