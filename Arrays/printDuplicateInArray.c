#include <stdio.h>
#include <stdlib.h>

void print_duplicates(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        int idx = abs(arr[i]);
        if (arr[idx] >= 0) {
            arr[idx] = -arr[idx];
        }
        else{
            printf("Duplicate element: %d\n", idx);
        }
    }
}

int main(void) {
    int arr[] = {1, 4, 5, 2, 4, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    print_duplicates(arr, size);
    return 0;
}