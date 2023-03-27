#include<bits/stdc++.h>
using namespace std;

int kthSmallest(int arr[], int n, int k) {
    for(int i = 0; i < k; i++) {
        int min_idx = i;
        for(int j = i+1; j < n; j++) {
            if(arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        swap(arr[i], arr[min_idx]);
    }
    return arr[k-1];
}

int main() {
    int arr[] = {12, 3, 5, 7, 19};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;
    int kthSmallestElement = kthSmallest(arr, n, k);
    cout << "The " << k << "th smallest element is: " << kthSmallestElement << endl;
    return 0;
}
