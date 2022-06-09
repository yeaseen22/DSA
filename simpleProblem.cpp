#include <iostream>
using namespace std;

int main()
{

    // 1 to n print the sum of all
    // int n, sum = 0;
    // cout << "Enter the value of n " << endl;
    // cin >> n;

    // for(int i =1; i <= n; i++){
    //     sum+=i;
    // }
    // cout << sum << endl;;


// fibonacci serious
    // int n = 10;

    // int a = 0;
    // int b = 1;
    // cout << a << endl;
    // cout << b << endl;

    // for (int i = 1; i <= n; i++)
    // {
    //     int nextNumber = a + b;
    //     cout << nextNumber << endl;
    //     a = b;
    //     b = nextNumber;
    // }

    // prime number 
    int n;
    cin>>n;
    bool isPrime = true;

    for(int i=2; i*i <n; i++){
        if(n%i == 0){
            isPrime = false;
            break;
        }
        
    }

    if(isPrime == false){
        cout << "This is not prime number " << endl;
    } else{
        cout << " Prime number " << endl;
    }

    return 0;
}