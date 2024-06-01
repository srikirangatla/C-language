#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n = 5;
    int *ptr1, *ptr2;
    ptr1 = (int *)malloc(n * sizeof(int));
    ptr2 = (int *)calloc(n, sizeof(int));

    if (ptr1 == NULL || ptr2 == NULL) {
        printf("Memory not allocated\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        ptr1[i] = i;
        ptr2[i] = n - i;
    }

    for (int i = 0; i < n; i++)
        printf("ptr1[%d]: %d\tptr2[%d]: %d\n",i, ptr1[i], i, ptr2[i]);

    free(ptr1);
    free(ptr2);
    return 0;
}

/*
ptr1[0]: 0	ptr2[0]: 5
ptr1[1]: 1	ptr2[1]: 4
ptr1[2]: 2	ptr2[2]: 3
ptr1[3]: 3	ptr2[3]: 2
ptr1[4]: 4	ptr2[4]: 1
*/