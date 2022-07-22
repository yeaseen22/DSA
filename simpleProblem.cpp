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

// function lecture home work
// int findNthFibo = 5;
// 	int n = 6;

// 	int a = 0;
// 	int b = 1;
// 	int nextNumber;
// 	cout << a << endl;
// 	cout << b << endl;

// 	for (int i = 1+a+b; i < findNthFibo; i++) {
//     int sum = nextNumber = a + b;
// 		nextNumber = a + b;
// 		cout << sum << endl;
// 		a = b;
// 		b = nextNumber;
  

    
// 	}
// 	cout << nextNumber;



// fibonacci serious
    // int n = 10;

    // int a = 0;
    // int b = 1;
    // int nextNumber;
    // cout << a << endl;
    // cout << b << endl;

    // for (int i = 1; i <= n; i++)
    // {
    //     nextNumber = a + b;
    //     cout << nextNumber << endl;
    //     a = b;
    //     b = nextNumber;
    // }
    // cout << nextNumber;

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