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
int hammingWeight(uint32_t n)
{

    int count = 0;
    while (n != 0)
    {
        if (n & 1)
        {
            count++;
        }
        n = n >> 1; //(ore n = n/2;)
    }

    // ore
    // (
    while (n > 0)
        count++;
    n = n & (n - 1);
    // ) better solution

    return count;
}

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
    // hammingWeight()
    //  reverse(123);
    
    return 0;
}