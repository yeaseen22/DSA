#include <iostream>
#include <bits/stdc++.h>
#include <Math.h>
#include <vector>

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

int main()
{

    // find unique element in array
    // int arr[5] = {1,3,4,1,3};

    //   cout << findUnique(arr, 5);
    // int count= 0;
    // for(int i= 0; i < 5; i++){

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

    // find occurences in the array
    // int arr[6] = {1, 2, 2, 1, 1, 3};
    // int cnt;
    // int visited[6];

    // for (int i = 0; i < 6; i++)
    // {
    //    if(visited[i] == 1){
    //     continue;
    //    }
    //    cnt=1;

    //    for(int j=i+1; j < 6; j++){
    //     if(arr[i] == arr[j]){
    //         cnt++;
    //         visited[j]=1;
    //     }
    //    }
    //    cout<< arr[i]<<" Found Times in array "<<cnt<<endl;
    //    if(arr[i] != cnt){
    //     return true;
    //    } else{
    //     return false;
    //    }
    // }

    // find duplicate in array
    int arr[6] = {1, 2, 2, 1, 1, 3};
    for (int i = 1; i <= 5; i++)
    {
        for (int j = i + 1; j <= 5; j++)
        {
            if (arr[i] == arr[j])
            {
                cout << arr[i] << endl;
            }
        }
    }

    // find the all duplicate element in array
    // int arr[6]={1, 2, 2, 1, 1, 3};
    // for(int i=1; i <= 5; i++){
    //     for(int j=i+1; j <= 5; j++){
    //         if(arr[i] == arr[j]){
    //             cout << arr[i]<<endl;
    //         }
    //     }
    // }

    // intersection of two array
    int arr1[6] = {12, 34, 55, 66, 8, 11};
    int arr2[6] = {10, 33, 54, 67, 8, 9};

    // for (int i = 0; i < 6; i)
    // {
    //     int element = arr1[i];
    //     for (int j = 0; j < 6; j)
    //     {
    //         if (element == arr2[j])
    //         {
    //             cout << element << endl;
    //             arr2[j] = -1;
    //             break;
    //         }
    //     }
    // }
    // or

    // int i=0, j-0;
    // vector<int> ans;

    // while(i<arr1[6] && j<arr2[6]){

    //     if(arr[i] == arr[j]){

    //         ans.push_back(arr[i]);
    //         i++;
    //         j++;
    //     }

    //     else if(arr[i] < arr2[j])
    //         i++;
        
    //     else
    //         j++;
    // }


    // pair sum

    // sort one 
    void sortOne(int arr[], int n) {

    int left = 0, right = n-1;

    while(left < right) {

        while(arr[left] == 0 && left < right )  {
            left++;
        }

        while(arr[right]==1 && left < right){
            right--;
        }

        //agar yha pohoch gye ho, iska matlab
        //arr[left]==1 and arr[right]==0
        if(left<right)
        {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }

}
    

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

    int findLargestEle;
    int exterCandi = 3;
    bool ans;
   int arr [5] = {11, 33, 9, 76, 43}
    for(int i=0; i<arr; i++){
        if(arr[0] < arr[i])
        findLargestEle = arr[i];
    }

    for(int i=0; i<arr; i++){
        if(arr[i] + exterCandi >= findLargestEle){
            ans[i] = true;
        } else{
            ans[i] = false;
        }
    }

    

    return 0;
}