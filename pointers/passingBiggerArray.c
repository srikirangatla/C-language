#include <stdio.h>
#include <stdlib.h>

void processArray(int *array, size_t size) {
    for (size_t i = 0; i < size; i++) {
        array[i] = array[i] * 2; // Example operation
    }
}

int main() {
    size_t size = 1024 * 1024 * 1024 / sizeof(int); // 1GB array size (for int)
    int *array = malloc(size * sizeof(int)); // Dynamically allocate 1GB on heap

    if (array == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Process the array
    processArray(array, size);

    free(array); // Free the allocated memory
    return 0;
}

/*
Yes, you can pass large arrays (such as 1 MB or even 1 GB) to a function in C, 
but there are some important considerations regarding how the array is passed and its impact on memory.

Key Considerations:
1. Passing by Pointer (Recommended)
In C, when passing arrays to functions, they are typically passed by reference, 
i.e., as pointers. This means only the memory address of the array is passed to the function, not the entire array. 
This approach is efficient and works well for large arrays because you are not copying all the data.
This method is particularly useful for handling large arrays (1MB or more), as only a few bytes (the pointer) are passed, 
regardless of the size of the array.

2. Passing by Value (Not Recommended for Large Arrays)
In C, passing arrays directly by value is not possible, but you can pass a struct containing the array by value. 
However, this results in copying the entire array into the function's stack frame, 
which can be very inefficient and cause stack overflow for large arrays.
This is not recommended for large arrays (such as 1 MB or 1 GB), 
as it leads to high memory consumption and can cause performance issues.

For very large arrays, this method will quickly exhaust stack memory (which is often limited to a few MBs).
3. Memory Constraints
When dealing with large arrays, make sure that:
You have enough heap or stack memory available to allocate such a large array.
The function call stack has enough space. Stack memory is usually more limited (often just a few MB), 
so for arrays larger than a few MB, you should use dynamic memory allocation (malloc), which allocates memory from the heap, 
rather than declaring the array as a local variable (stack allocation).
Stack memory is typically limited to 1-8 MB depending on the system, while the heap is much larger and dynamically expandable. 
Thus, for arrays larger than a few MB, dynamic memory allocation is preferred.

Example of allocating large arrays on the heap:

c
Copy code
int *largeArray = malloc(1024 * 1024 * sizeof(int)); // 1 MB array
if (largeArray == NULL) {
    // Handle memory allocation failure
}
4. System Limits
The ability to pass large arrays (such as 1 MB or 1 GB) depends on the system’s memory limitations:
Physical memory (RAM): Large arrays require sufficient physical RAM. 
A system with limited RAM may encounter issues handling very large arrays.
Stack vs. Heap: As mentioned, large arrays should typically be allocated on the heap (using malloc() or calloc()) 
instead of the stack, since stack space is much more limited.

Conclusion:
Yes, you can pass large arrays (1 MB, 1 GB) to a function in C.
Use pointers to pass large arrays efficiently without copying the data.
Prefer heap allocation (malloc()) for large arrays to avoid stack overflow.
Ensure your system has enough physical memory (RAM) for large allocations.
*/