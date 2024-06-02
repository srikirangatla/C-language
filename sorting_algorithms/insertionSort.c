#include <stdio.h>

void insertionSort (int arr[], int len) {
    int i, j, key;
    for (i = 1; i < len; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void printList (int arr[], int len) {
    for (int i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {8, 4, 6, 1, 9};
    int len = sizeof(arr) / sizeof(arr[0]);
    insertionSort(arr, len);
    printList(arr, len);
    return 0;
}

/*
1 4 6 8 9 
*/