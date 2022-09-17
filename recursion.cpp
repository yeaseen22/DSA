#include <iostream>

using namespace std;

int factorial(){

    if(n == 0)
        return 1;
    
    int smollPro = factorial(n-1);
    // int bigPro = n * smollPro;
    int bigPro = 2 * smollPro; /// also for power of 2


    return bigPro;
}

int main(){


    int n;
    cin >> n;

    int ans = factorial(n);
    cout << ans << endl;

    return 0;
}


