#include <iostream>

using namespace std;

int main () {

    double num = 5;
    // int num = 5;
    cout << num << endl;

    cout << "Addres of num " << &num << endl;

    // int *ptr = &num;
    double *ptr = &num;


    // cout << ptr << endl;
    // cout << *ptr << endl;

    cout << "size of Pointer " << sizeof(ptr) << endl;
    cout << "size of value " << *ptr << endl;



    return 0;
}


