#include <iostream>
#include <bits/stdc++.h>

using namespace std;
// void printArray(int arr[], int n)
// {

//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

// void swapAlternate(int arr[], int size)
// {
//     for (int i = 0; i < size; i += 2)
//     {
//         int temp = arr[i];
//         if (i + 1 < size)
//         {
//             // swap in imperative way
//             arr[i] = arr[i+1];
//             arr[i+1] = temp;

//             // swap declerative way
//             // swap(arr[i], arr[i + 1]);
//         }
//     }
// }

// int getMin(int num[], int n)
// {

//     int mini = INT_MAX;

//     for (int i = 0; i < n; i++)
//     {

//         mini = min(mini, num[i]);

//         // if(num[i] < min){
//         //     min = num[i];
//         // }
//     }

//     // returning min value
//     return mini;
// }

// int getMax(int num[], int n)
// {

//     int maxi = INT_MIN;

//     for (int i = 0; i < n; i++)
//     {

//         maxi = max(maxi, num[i]);

//         // if(num[i] > max){
//         //   max = num[i];
//         // }
//     }

//     // returning max value
//     return maxi;
// }

// void reverse(int arr[], int n)
// {

//     int start = 0;
//     int end = n - 1;

//     while (start <= end)
//     {
//         swap(arr[start], arr[end]);
//         start++;
//         end--;
//     }
// }

// void printArray(int arr[], int n)
// {

//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

// void printArray(int arr[], int n) {

//     for(int i = 0; i<n; i++ ) {
//         cout<< arr[i] <<" ";
//     }cout<<endl;

// }

// void swapAlternate(int arr[], int size) {

//     for(int i = 0; i<size; i+=2 ) {
//         if(i+1 < size) {
//             swap(arr[i], arr[i+1]);
//         }
//     }

int findUnique(int arr[], int size){
    int ans = 0;
    for(int i=0; i<size; i++){
        ans=ans^arr[i];
        // cout <<ans;
    }
    return ans;
}

int main()
{


    // find unique element in array
    int arr[5] = {1,3,4,1,3};

      cout << findUnique(arr, 5);

    // for(int i= 0; i < 5; i++){
    //     int count= 0;
    //     for(int j= 0; j < 5; j++){
    //         if(i != j){

    //            if(arr[i] == arr[j]){
    //             count++;
    //            } 
    //         }
    //     }
    //     if(count == 0){
    //         cout <<arr[i] <<endl;
    //     }
    // }

    
    

    
    
    
    
    

    // int even[8] = {5, 2, 9, 4, 7, 6, 1, 0};
    // int odd[5] = {11, 33, 9, 76, 43};

    // swapAlternate(even, 8);
    // printArray(even, 8);

    // int size;
    // cin >> size;

    // int num[100];

    // // taking input in array
    // for (int i = 0; i < size; i++)
    // {
    //     cin >> num[i];
    // }

    // cout << " Maximum value is " << getMax(num, size) << endl;
    // cout << " Minimum value is " << getMin(num, size) << endl;

    // int arr[6] = {1, 4, 0, 5, -2, 15};
    // int brr[5] = {2, 6, 3, 9, 4};

    // reverse(arr, 6);
    // reverse(brr, 5);

    // printArray(arr, 6);
    // printArray(brr, 5);

    // int even[8] = {5, 2, 9, 4, 7, 6, 1, 0};
    // int odd[5] = {11, 33, 9, 76, 43};

    // swapAlternate(even, 8);
    // printArray(even, 8);

    // cout << endl;

    // swapAlternate(odd, 5);
    // printArray(odd, 5);

    return 0;
}