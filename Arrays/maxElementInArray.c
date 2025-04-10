#include <stdio.h>

int find_max(int arr[], int n) {
    int max = arr[0];
    for (int i = 0; i < n; i++) {
        if ( arr[i] > max ) {
            max = arr[i];
        }
    }
    return max;
}

int main(void)
{
    int arr[] = {2, 6, 34, 56, 22, 45};
    int size = sizeof(arr)/sizeof(arr[0]);
    printf("max val: %d\n", find_max(arr, size));
    return 0;
}