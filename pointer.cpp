#include <iostream>

using namespace std;

int main () {

    // double num = 5;
    // // int num = 5;
    // cout << num << endl;

    // cout << "Addres of num " << &num << endl;

    // // int *ptr = &num;
    // double *ptr = &num;


    // // cout << ptr << endl;
    // // cout << *ptr << endl;

    // cout << "size of Pointer " << sizeof(ptr) << endl;
    // cout << "size of value " << *ptr << endl;


    // some practice in pointers
      //pointer to int is created, and pointing to some garbage address
    //int *p = 0; 

    //cout << *p << endl;

    /*
    int i = 5;
    int *q = &i;
    cout << q << endl;
    cout << *q << endl;
    int *p = 0;
    p = &i;
    cout << p << endl;
    cout << *p << endl;
    */

   int num = 5;
   int a = num;
   cout << "a before " << num << endl;
   a++;
   cout << "a after " << num << endl;


   int *p  = &num;
   cout << "before " << num << endl;
   (*p)++;
   cout << "after " << num << endl;

    //copying a pointer
   int *q = p;
   cout << p <<" - " << q << endl;
   cout << *p <<" - " << *q << endl;

   //important concept
   int i = 3;
   int *t = &i;
   //cout <<  (*t)++ << endl;
   *t = *t +1;
    cout << *t << endl;
    cout << " before t " << t << endl;
    t = t + 1;
    cout << " after t " << t << endl;


    return 0;
}


