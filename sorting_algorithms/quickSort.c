#include <stdio.h>

void swap (int *p1, int *p2) {
    int temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int partition (int arr[], int low, int high) {
    int i, j, piv;
    i = low -1;
    piv = arr[high];
    for (j = low; j <= high; j++) {
        if (arr[j] < piv) {
            i++;
            swap (&arr[i], &arr[j]); // move smaller elements left side to pivot
        }
    }
    swap (&arr[i+1], &arr[high]); // swap with last pivot element with correct index above small element
    return (i+1);
}

void quickSort (int arr[], int low, int high) {
    if (low < high) {
        int pivot = partition (arr, low, high); 
        quickSort (arr, low, pivot - 1);
        quickSort (arr, pivot + 1, high);
    }
}

void printList (int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {66, 77, 44, 33, 22, 99, 55};
    int len = sizeof(arr) / sizeof(arr[0]);
    quickSort(arr, 0, len - 1);
    printList(arr, len);

    return 0;
}

/*
22 33 44 55 66 77 99
*/