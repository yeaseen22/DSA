#include <iostream>
#include <bits/stdc++.h>

using namespace std;

  int update(int arr[], int size){
    arr[0]=101;
    for(int i =0; i < size; i++){
        cout<<arr[i];
    }
  }

int main(){

    // declare 
    int number[13];
    int number2[10] = {3, 6};
    int number[3] = {0};
    int number[5] = {1};

    int size = sizeof(number)/sizeof(int);
    char ch[2] = {'a', 'b'};

    // cout<< number2[1] <<endl;

    for(int i =0; i < 10; i++){
        // cout<< number2[i];
    }

    int arr[3] = {2, 4,6};

    update(arr, 3);

    for(int i=0; i<3; i++){
        cout << arr[i] <<endl;
    }

    int numbers[5] = {10,20,30,40,50};
    cout << numbers[0]<<endl;

    for(int i=0; i < 5; i++){
      cout<< numbers[i]<< "this are numbers value" <<endl;
    }



    return 0;
}