#include <stdio.h>

void bubbleSort (int arr[], int size) {
    for (int i = 0; i < (size - 1); i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j+1]) {
                arr[j] ^= arr[j+1];
                arr[j+1] ^= arr[j];
                arr[j] ^= arr[j+1];
            }
        }
    }
}

void printList (int arr[], int size) {
    for (int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = { 4, 2, 6, 98, 456, 56, 9, 5};
    int len = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, len);

    printList(arr, len);

    return 0;
}

/*
2 4 5 6 9 56 98 456
*/