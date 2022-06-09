#include <iostream>
using namespace std;

// int subtractProductAndSum(int n)
// {

//     int prod = 1;
//     int sum = 0;
//     while (n != 0)
//     {
//         int digit = n % 10;
//         prod = prod * digit;
//         sum = sum + digit;
//         n = n / 10;
//     }
//     int answer = prod - sum;
//     return answer;
// }

// number of 1 bit
// int hammingWeight(uint32_t n) {
        
        // int count = 0;
        // while(n!=0){
        //     if(n&1){
        //         count++;
        //     }
        //     n= n>>1;
        // }
        // return count;

    // reverse an integer

        int reverse(int x) {
        int reverse =0;
        while(x!=0){
            reverse*=10;
            reverse+= x%10;
            x /= 10;
        }
        cout<< reverse;
        return reverse;
    }

int main()
{
    // subtractProductAndSum(234);
    // hammingWeight()
     reverse(123) ;
    return 0;
}