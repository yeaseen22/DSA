#include <iostream>
using namespace std;

int main() {
    int arr[5] = {11,22,2,4,5,9};
    for(int i = 1; i < n; i++){
        // for round n to n-1
        for(int j = 0; j < n-i; j++){
            // process element till n-1th index
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
    return 0;
}