#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int row = 3, col =3;
    int **arr = (int **)malloc(row * sizeof(int *));
    if (arr == NULL) {
        printf("Memory Allocation failed\n");
        return 1;
    }

    for (int i = 0; i < row; i++) {
        arr[i] = (int *)malloc(col * sizeof(int));
        if (arr[i] == NULL) {
            printf("Memory Allocation failed\n");
            return 1;
        }
    }

    int count = 0;
    for (int i = 0; i < row; i++)
        for(int j = 0; j < col; j++)
            arr[i][j] = count++;
    
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    for(int i = 0; i < row; i++)
        free(arr[i]);
    
    free(arr);

    return 0;
}

/*
0 1 2 
3 4 5 
6 7 8 
*/