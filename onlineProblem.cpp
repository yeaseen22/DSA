#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

int subtractProductAndSum(int n)
{

    int prod = 1;
    int sum = 0;
    while (n != 0)
    {
        int digit = n % 10;
        prod = prod * digit;
        sum = sum + digit;
        n = n / 10;
    }
    int answer = prod - sum;
    return answer;
}

// number of 1 bit

int hammingWeight(uint32_t n, uint32_t n1) {
  
	int count = 0;
  int count2 = 0;
  
	while (n != 0) {
		if (n & 1) {
			count++;
		}
		n = n >> 1; //(ore n = n/2;)
	}

  while (n1 != 0) {
		if (n1 & 1) {
			count2++;
		}
		n1 = n1 >> 1; //(ore n = n/2;)
	}

	// ore
	// (
	// while (n > 0)
	// 	count++;
	// n = n & (n - 1);
	// ) better solution

  int sum = count + count2;

	cout << sum << endl;

  return 0;
};


// reverse an integer

int reverse(int x)
{
    int reverse = 0;
    while (x != 0)
    {
        reverse *= 10;
        reverse += x % 10;
        x /= 10;
    }
    cout << reverse;
    return reverse;

    // one other solutions
    int ans = 0;
    while( x != 0){

        int digit = x % 10;

        if( (ans > INT_MAX / 10) || (ans < INT_MIN / 10) ){
            return 0;
        }

        ans = (ans * 10) + digit;
        x = x / 10;

    }
    return ans;
}



int main()
{
    // subtractProductAndSum(234);
    int a = hammingWeight(2, 2);
    cout<<a<<endl;
    //  reverse(123);
    
    return 0;
}