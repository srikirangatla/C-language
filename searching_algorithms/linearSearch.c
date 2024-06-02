#include <stdio.h>

int linearSeach(int *arr, int len, int key) {
    printf("len: %d\n", len);
    for (int i = 0; i < len; i++) {
        if (key == arr[i]) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {10, 22, 54, 76, 3, 0, 23}; // unsorted array of small length
    int key = 23;
    int len = sizeof(arr) / sizeof(arr[0]);

    int index = linearSeach(arr, len, key);

    if (index == -1)
        printf("key not found\n");
    else
        printf("key found at %d\n", index);
    
    return 0;
}

/*
len: 7
key found at 6
*/