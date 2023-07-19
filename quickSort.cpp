#include <iostream>
#include <vector>

using namespace std;

// Partition function to rearrange the elements
// in the array around the pivot
int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i + 1], arr[high]);
    return i + 1;
}

// Quicksort function
void quicksort(vector<int>& arr, int low, int high) {
    if (low < high) {
        // Partition the array into two halves
        int pivotIndex = partition(arr, low, high);

        // Recursively sort the two halves
        quicksort(arr, low, pivotIndex - 1);
        quicksort(arr, pivotIndex + 1, high);
    }
}

// Function to print the elements of an array
void printArray(const vector<int>& arr) {
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    vector<int> arr = {9, 7, 5, 1, 3};
    int n = arr.size();

    cout << "Original array: ";
    printArray(arr);

    quicksort(arr, 0, n - 1);

    cout << "Sorted array: ";
    printArray(arr);

    return 0;
}
