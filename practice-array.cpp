#include <iostream>
#include <bits/stdc++.h>

using namespace std;
bool search(int arr[], int size, int key)
{

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }
    }
    return 0;
}

int getMin(int num[], int n)
{

    int mini = INT_MAX;

    for (int i = 0; i < n; i++)
    {

        mini = min(mini, num[i]);

        // if(num[i] < min){
        //     min = num[i];
        // }
    }

    // returning min value
    return mini;
}

int getMax(int num[], int n)
{

    int maxi = INT_MIN;

    for (int i = 0; i < n; i++)
    {

        maxi = max(maxi, num[i]);

        // if(num[i] > max){
        //   max = num[i];
        // }
    }

    // returning max value
    return maxi;
}

void reverse(int arr[], int n)
{

    int start = 0;
    int end = n - 1;

    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void printArray(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{

    // int arr[10] = {5, 7, -2, 10, 22, -2, 0, 5, 22, 1};

    // int key = 10;

    // bool found = search(arr, 10, key);
    // if (found)
    // {
    //     cout << key << "key is present in array" << endl;
    // }
    // else
    // {
    //     cout << key << "key is absent";
    // }

    // int size;
    // cin>>size;

    // int num[100];
    // for(int i=0; i<size; i++){
    //     cin>>num[i];
    // }

    // cout<<"Maximum value is " << getMax(num, size)<<endl;
    // cout<<"Minimum value is " << getMin(num, size)<<endl;

    int arr[6] = {1, 4, 0, 5, -2, 15};
    int brr[5] = {2, 6, 3, 9, 4};

    reverse(arr, 6);
    reverse(brr, 5);

    printArray(arr, 6);
    printArray(brr, 5);

    return 0;
}