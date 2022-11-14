#include <iostream>

int binarySearch(int arr[], int size, int key){
    int start = 0;
    int end = size-1;

    int mid = start + (end-start)/2;

    while(start<=end){
          if(arr[mid] == key) {
            return mid;
        }

        //go to right wala part
        if(key > arr[mid]) {
            start = mid + 1;
        }
        else{ //key < arr[mid]
            end = mid - 1;
        }

        mid = start + (end-start)/2;
    }
    
    return -1;
    }


    // Bubble sort
    void bubbleSortAdavtive(int *arr, int size)
{
    int isSorted;
    for (int i = 0; i < size - 1; i++) // for passes
    {
        isSorted = true;
        // cout << "pass no " << i + 1 << endl; for visualzing passes

        for (int j = 0; j < size - 1 - i; j++) // for comparison 
        {
            if (arr[j] > arr[j + 1])
            {
                // swap and decided the isSorted
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
                isSorted = false;
            }
        }
        if (isSorted) // if sorted
        {
            return;
        }
    }
}


int main(){

    // binary search should be in monotonic function, increasing or dicreasing order
    int even[6] = {2,4,6,8,12,18};
    int odd[5] = {3, 8, 11, 14, 16};


    

    return 0;
}