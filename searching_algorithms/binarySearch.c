#include <stdio.h>

int binarySearch(int arr[], int low, int high, int key) {

    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int main() {
    int arr[] = {1, 3, 7, 9, 19, 23, 45, 56};
    int len = sizeof(arr) / sizeof(arr[0]);
    int key = 45;
    int index = binarySearch(arr, 0, len-1, key);
    if(index == -1)
        printf("key not found\n");
    else
        printf("key found at %d\n", index);
    return 0;
}

/*
key found at 6
*/