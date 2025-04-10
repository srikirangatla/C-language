1. Find Missing Number in Range 0 to N

int find_missing(int arr[], int n) {
    int total = n * (n + 1) / 2;
    for (int i = 0; i < n; i++)
        total -= arr[i];
    return total;
}

2. Check if All Elements Are Unique Using Bitwise (0–31 range)

bool all_unique(int arr[], int n) {
    int bitmap = 0;
    for (int i = 0; i < n; i++) {
        int bit = 1 << arr[i];
        if (bitmap & bit)
            return false;
        bitmap |= bit;
    }
    return true;
}

3. Rotate Array Clockwise by k (Efficient)

void reverse(int arr[], int l, int r) {
    while (l < r) {
        int temp = arr[l];
        arr[l++] = arr[r];
        arr[r--] = temp;
    }
}

void rotate(int arr[], int n, int k) {
    k = k % n;
    reverse(arr, 0, n - 1);
    reverse(arr, 0, k - 1);
    reverse(arr, k, n - 1);
}

4. Find the Second Largest Element

int second_largest(int arr[], int n) {
    int first = INT_MIN, second = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }
    return second;
}

5. Count the Frequency of Each Element

method-1: (0–N-1 range)
void count_frequency(int arr[], int n) {
    for (int i = 0; i < n; i++)
        arr[arr[i] % n] += n;

    for (int i = 0; i < n; i++)
        printf("Element %d occurs %d times\n", i, arr[i] / n);
}

method-2:

void countDistinct(int arr[], int n)
{
    //Sorting of the array
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){ 
            if(arr[i]>arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
 
    // Traverse the sorted array
    for (int i = 0; i < n; i++){
        int count = 1;

        // Move the index ahead whenever
        // you encounter duplicates
        while (i < n - 1 && arr[i] == arr[i + 1]){
            i++;
            count++;
        }
        
        printf("%d : %d\n", arr[i], count);
    }
 
}

6. Find Leader Elements (Rightmost Dominant)
Element is a leader if it's greater than all elements to its right

void print_leaders(int arr[], int n) {
    int max = arr[n - 1];
    printf("%d ", max);
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] > max) {
            max = arr[i];
            printf("%d ", max);
        }
    }
}

7. Find First Repeating Element

int first_repeating(int arr[], int n) {
    int index[100000] = {0};
    int min = -1;
    for (int i = n - 1; i >= 0; i--) {
        if (index[arr[i]] != 0)
            min = i;
        else
            index[arr[i]] = 1;
    }
    return (min != -1) ? arr[min] : -1;
}

8. Check if Array is Sorted and Rotated
//Often seen in ring buffers in embedded circular memory use.

bool check_sorted_rotated(int arr[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > arr[(i + 1) % n])
            count++;
    }
    return (count <= 1);
}

9. Find Peak Element (greater than both neighbors)

int find_peak(int arr[], int n) {
    for (int i = 1; i < n - 1; i++) {
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1])
            return arr[i];
    }
    return -1;  // if no peak
}

10. 