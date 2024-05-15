#include <iostream>
#include <vector>

using namespace std;

// Merge function to merge two sorted sub-arrays A[p...q] and A[q+1...r]
void merge(vector<int>& A, int p, int q, int r) {
    // Calculate sizes of two sub-arrays to be merged
    int n1 = q - p + 1; // Size of left subarray A[p...q]
    int n2 = r - q;     // Size of right subarray A[q+1...r]

    // Create temporary arrays L[] and R[] to hold the data of two sub-arrays
    vector<int> L(n1 + 1), R(n2 + 1);

    // Copy data from main array A[] to temporary arrays L[] and R[]
    for (int i = 0; i < n1; i++)
        L[i] = A[p + i]; // Copy data from left subarray A[p...q]
    for (int j = 0; j < n2; j++)
        R[j] = A[q + 1 + j]; // Copy data from right subarray A[q+1...r]

    // Set sentinel values at the end of each temporary array
    L[n1] = INT_MAX; // Sentinel for left subarray
    R[n2] = INT_MAX; // Sentinel for right subarray

    // Merge the temporary arrays back into the main array A[p...r]
    int i = 0, j = 0;
    for (int k = p; k <= r; k++) {
        if (L[i] <= R[j]) {
            A[k] = L[i]; // If element from L[] is smaller or equal, copy it to A[]
            i++;         // Move to the next element in L[]
        } else {
            A[k] = R[j]; // If element from R[] is smaller, copy it to A[]
            j++;         // Move to the next element in R[]
        }
    }
}

// Merge sort function to recursively divide the array and merge the sorted halves
void merge_sort(vector<int>& A, int p, int r) {
    if (p < r) {
        // Find the middle point
        int q = (p + r) / 2; // Calculate the middle index

        // Recursively sort first and second halves
        merge_sort(A, p, q);     // Sort the left half A[p...q]
        merge_sort(A, q + 1, r); // Sort the right half A[q+1...r]

        // Merge the sorted halves
        merge(A, p, q, r); // Merge the sorted halves A[p...q] and A[q+1...r]
    }
}

int main() {
    // Sample array to be sorted
    vector<int> arr = {12, 11, 13, 5, 6, 7};
    int arr_size = arr.size();

    cout << "Given array is \n";
    for (int i = 0; i < arr_size; i++)
        cout << arr[i] << " ";
    cout << endl;

    // Call merge_sort to sort the array
    merge_sort(arr, 0, arr_size - 1);

    // Print the sorted array
    cout << "Sorted array is \n";
    for (int i = 0; i < arr_size; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
