#include <iostream>
using namespace std;

int mian () {
    // create 2d array
    int arr[3][3];

    // taking input 
    for(int i=0; i < 3; i++){
        for(int j=0; j < 3; j++){
            cin >> arr[i][j];
        }
    }


    // print
    for(int i=0; i < 3; i++){
        for(int j=0; j < 3; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

