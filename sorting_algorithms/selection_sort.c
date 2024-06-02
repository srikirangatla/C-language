#include <stdio.h>

void selectionSort(int arr[], int len) {
    int i, j, min;
    for (i = 0; i < len - 1; i++) {
        min = i;
        for (j = i + 1; j < len; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        if ( min != i) {
            arr[min] ^= arr[i]; //swap
            arr[i] ^= arr[min];
            arr[min] ^= arr[i];
        }
        
    }
}

int main() {
    int arr[] = {3, 2, 6, 4, 98, 45, 32, 56};
    int len = sizeof(arr) / sizeof(arr[0]);

    selectionSort(arr, len);

    for (int i = 0; i < len; i++)
        printf("%d ", arr[i]);
    printf ("\n");
    return 0;
}

/*
2 3 4 6 32 45 56 98
*/