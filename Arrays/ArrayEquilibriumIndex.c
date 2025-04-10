/*An index where sum of left = sum of right*/
#include <stdio.h>

int equilibriumIndex(int arr[], int n) {
    int total = 0, leftsum = 0;
    for (int i =0; i < n; i++)
        total += arr[i];
    for(int i = 0; i < n; i++) {
        total -= arr[i]; // total is right sum now
        if (leftsum == total)
            return i;
        else
            leftsum += arr[i];
    }
    return -1;
}

int main(void) {
    int arr[] = {4, 5, 0, 2, 3, 4}; 
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("Equilibrium index: %d\n", equilibriumIndex(arr, size));
    return 0;
}