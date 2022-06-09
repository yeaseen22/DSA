#include <iostream>
using namespace std;

// prime number
// bool isPrime(int n)
// {
//     for (int i = 2; i < n; i++)
//     {
//         if (n % i == 0)
//         {
//             // divide hogya h , not a prime no.
//             return 0;
//         }
//     }
//     return 1;
// }

// power of a,b
//     int power(int num1, int num2) {

//     //cout << a <<endl;

//     int ans = 1;

//     for(int i = 1; i <= num2; i++) {
//         ans = ans * num1;
//     }

//     return ans;
// }

// factorail ncr

// int factorial(int n) {

//     int fact = 1;

//     for(int i = 1; i<=n; i++ ) {
//         fact = fact * i;
//     }

//     return fact;
// }

// int nCr(int n, int r) {

//     int num = factorial(n);

//     int denom = factorial(r) * factorial(n-r);

//     return num/denom;
// }

// Function Signature
// void printCounting(int num)
// {

//     //    cout << n << endl;
//     // Function Body
//     for (int i = 1; i <= num; i++)
//     {
//         cout << i << " ";
//     }
//     cout << endl;
// }

    //1 -> Even
// 0 -> odd
// bool isEven(int a) {
//     //odd
//     if(a&1) {
//         return 0;
//     }
//     else { //Even
//         return 1;
//     }

// }

// pass by value
void dummy(int n ) {
    n++;
    cout << " n is " << n <<endl;

}

int main()
{

    // int n;
    // cin >> n;
    // if (isPrime(n))
    // {
    //     cout << " is a Prime number " << endl;
    // }
    // else
    // {
    //     cout << "Not a prime number " << endl;
    // }

    // int c, d;
    // cin >> c >> d;

    // int answer = power(c, d);
    // cout << " answer is " << answer << endl;

    // int n, r;

    // cin>> n >> r ;

    // cout <<" Answer is " << nCr(n,r) << endl;

    // int n;
    // cin >> n;

    // //function Call
    // printCounting(n);

    // int num;
    // cin >> num;

    // if(isEven(num)) {
    //     cout <<" Number is Even" <<endl;
    // }
    // else {
    //     cout<< " Number is Odd" <<endl;
    // }

    int n;
    cin >> n;

    dummy(n);

    cout<<"number n is "<< n << endl;

    return 0;
}