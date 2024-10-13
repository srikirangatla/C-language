#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    unsigned int n = 5, i;

    // Dynamically allocate memory for 5 integers
    arr = (int*)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Initialize and print the array
    for (i = 0; i < n; i++) {
        arr[i] = i + 1;
        printf("%d ", arr[i]);
    }

    // Reallocate memory to expand the array to 10 integers
    arr = (int*)realloc(arr, 10 * sizeof(int));
    if (arr == NULL) {
        printf("Memory reallocation failed!\n");
        return 1;
    }

    // Initialize and print the expanded array
    for (i = 5; i < 10; i++) {
        arr[i] = i + 1;
    }

    printf("\nExpanded Array: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }

    // Free the allocated memory
    free(arr);

    return 0;
}
