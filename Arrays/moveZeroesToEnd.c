#include <stdio.h>

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf ("%d ", arr[i]);
    }
    printf("\n");
}

void move_zeroes(int arr[], int n, int num) {
    int idx = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] != num) {
            arr[idx++] = arr[i];
        }
    }
    while (idx < n) {
        arr[idx++] = num;
    }
}

int main() {
    int arr[] = {1, 0, 35, 0, 1, 6, 73, 1, 0, 0};
    int size = sizeof(arr)/sizeof(arr[0]);
    int num = 0; // input any number u want to move end

    printArray(arr, size);
    move_zeroes(arr, size, num);
    printArray(arr, size);
    
    return 0;
}