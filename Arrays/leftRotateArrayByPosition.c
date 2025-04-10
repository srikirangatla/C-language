#include <stdio.h>

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf ("%d ", arr[i]);
    }
    printf("\n");
}

void leftShiftArrByOne (int arr[], int n) {
    int temp = arr[0];
    for (int i = 0; i < n; i++) {
        arr[i] = arr[i+1];
    }
    arr[n-1] = temp;
}

void leftShiftArr (int arr[], int pos, int n) {
    for(int i = 0; i < pos; i++) {
        leftShiftArrByOne (arr, n);
    }
}

int main() {
    int arr[] = {1, 2, 35, 545, 56, 6, 73, 32, 4,34};
    int size = sizeof(arr)/sizeof(arr[0]);
    int noOfPos = 3;

    printArray(arr, size);
    leftShiftArr(arr, noOfPos, size);
    printArray(arr, size);
    
    return 0;
}