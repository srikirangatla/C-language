/*kadane's Algorithm*/
#include <stdio.h>

int  max_subArray(int arr[], int n) {
    int maxSum = arr[0], currSum = arr[0];
    for (int i = 1; i < n; i++) {
        currSum = (arr[i] > (currSum + arr[i])) ? arr[i] : (currSum + arr[i]);
        maxSum = (maxSum > currSum) ? maxSum : currSum;
    }
    return maxSum;
}

int main(void) {
    int arr[] = {1, 4, 5, 2, -4, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("MaxSum: %d\n", max_subArray(arr, size));
    return 0;
}