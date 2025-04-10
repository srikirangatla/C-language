🔹 1. 📘 Basics of Arrays in C
✅ What is an Array?
An array is a collection of elements of the same type, stored in contiguous memory locations.

c
Copy
Edit
int arr[5] = {1, 2, 3, 4, 5};
arr[0] to arr[4] are accessible

Indexing starts from 0

Memory: if arr starts at 0x1000, and int = 4 bytes:

arr[0] → 0x1000

arr[1] → 0x1004

arr[2] → 0x1008 and so on.

🔹 2. Memory Layout
Arrays are sequential in memory

Can be passed by reference (as pointers)

Can lead to buffer overruns if not handled properly

🔹 3. Array Declaration Variants
c
Copy
Edit
int arr[5];                     // Static size, uninitialized
int arr[5] = {1};               // First element = 1, rest = 0
int arr[] = {1, 2, 3};          // Compiler determines size = 3
int *arr = malloc(5 * sizeof(int)); // Dynamic array
🔹 4. Pointer and Array Relationship
c
Copy
Edit
int arr[5] = {1, 2, 3, 4, 5};
int *p = arr;

printf("%d\n", *(p + 2));  // Output: 3
✅ arr[i] is same as *(arr + i)

🔹 5. Interview Questions: Basic Level
🔸 Q1: What is the output?
c
Copy
Edit
int arr[3] = {10, 20, 30};
printf("%d", *(arr + 1));
✅ Output: 20

🔸 Q2: Can we change the base address of an array?
c
Copy
Edit
arr = arr + 1; // Error!
❌ Not allowed. Arrays are non-modifiable lvalues.

🔸 Q3: What's wrong?
c
Copy
Edit
int arr[5];
arr[5] = 100;  // ?
❌ Buffer overflow – valid indices: 0 to 4

🔸 Q4: How do you pass an array to a function?
c
Copy
Edit
void print(int arr[], int n); // OR
void print(int *arr, int n);
Internally both are treated as pointers.

🔹 6. Intermediate-Level Concepts
🧠 1. Arrays as Function Parameters
Arrays decay to pointers when passed:

c
Copy
Edit
void print(int arr[]) { }  // treated as int *arr
🧠 2. 2D Arrays
c
Copy
Edit
int matrix[3][3] = {
  {1,2,3},
  {4,5,6},
  {7,8,9}
};
Memory is row-major.

🧠 3. Array of Pointers
c
Copy
Edit
char *names[] = {"Srikiran", "Samsung", "Firmware"};
Each element is a pointer to a string.

🧠 4. Pointer to Array
c
Copy
Edit
int arr[5] = {1,2,3,4,5};
int (*p)[5] = &arr;
*p is entire array, (*p)[2] is 3rd element.

🔥 7. Advanced & Tricky Interview Questions
🔸 Q1: What's the output?
c
Copy
Edit
int arr[] = {10, 20, 30, 40, 50};
printf("%d", 2[arr]);
✅ Output: 30

Why? Because arr[2] ≡ *(arr + 2) ≡ *(2 + arr) ≡ 2[arr]

🔸 Q2: Difference between:
c
Copy
Edit
int arr[5];
int *ptr = arr;
arr is an array name, not a modifiable pointer

ptr is a pointer; ptr++ is valid, arr++ is not

🔸 Q3: What's wrong here?
c
Copy
Edit
void fun(int arr[10]) {
    printf("%d", sizeof(arr));
}
✅ Output = Size of pointer (typically 4 or 8), not 40 bytes.

Reason: arr decays to int *arr in function argument.

🔸 Q4: Can arrays be returned from functions?
c
Copy
Edit
int* func() {
    int arr[10];  // Local array
    return arr;   // ❌ UB - array goes out of scope
}
✅ Instead: Use static array or allocate on heap.

🔸 Q5: 2D Array passed to a function
c
Copy
Edit
void print(int matrix[][3]) // ✅ Correct
You must specify column size for correct pointer arithmetic.

🧪 Bonus Challenge: Reverse Array in Place
c
Copy
Edit
void reverse(int arr[], int n) {
    for (int i = 0; i < n/2; i++) {
        int temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }
}
