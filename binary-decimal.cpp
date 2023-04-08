#include <iostream>
#include <math.h>
#include <stdio.h>

using namespace std;

// negative decimal to binary

int main2 (void){
        int i            = 0;
        unsigned int u_i = 0;
        int j            = 0;
        int b[16]        = {0}; //Assuming your integer size is 16bit

        printf("input number");
        scanf("%d",&i);

        u_i = (unsigned int)i;

        for(j=15;j>=0;j--) {
            b[j] = u_i & 0x1;
            u_i  = u_i >> 1;
        }

        for (j=0;j<=15;j++)
            printf("%d", b[j]);

        printf("\n");
        return 0;
    }

  // complimentBase10Integer
  void complimentBase10Integer(int num) {
  int binary[128]; // ৩২ বিট বাইনারি সংখ্যা জন্য একটি অ্যারে

  int i = 0;
  while (num > 0) {
    binary[i] = num % 2; // বিপরীত বিট সেট করা
    num = num / 2;
    cout<<num<<std::endl;
    // std::cout<<num;
    i++;
  }

  // বিপরীত চিহ্নিত করা বাইনারি সংখ্যা প্রিন্ট করা
  cout << "Binary Numbers ";
  for (int j = 0;j<= 2; j++) {
    std::cout << binary[j];
  }
  std::cout << std::endl;
}


int main(){

  main2();


  int num;
  cout << "Enter The Number: ";
  cin >> num;

  complimentBase10Integer(num);

  return 0;
}

  // decimal to binary convertion
  // int n;
  // cin >> n;

  // int ans = 0;
  // int i = 0;
  // while( n != 0){
  //     int bit =  n & 1;
  //     ans = (bit * pow(10, i) ) + ans;

  //     n = n >> 1;
  //     i++;

  // }

  // cout << "Answer is" << ans << endl;

  // binary to decimal
//   int n;
//   cin >> n;

//   int i = 0;
//   int ans = 0;

//   while (n != 0)
//   {
//     int digit = n % 10;

//     if (digit == 1)
//     {
//       ans = ans + pow(2, i);
//     }
//     n = n / 10;
//     i++;
//   }
//   cout << ans << endl;
//   // another afforoach o binary to decimal

//   int n;
//   cout << "Enter a  binary number" << endl;
//   cin >> n;
//   long long int ans = 0;
//   int i = 0;
//   while (n > 0)
//   {

//     int bit = n & 1;
//     ans = bit * pow(2, i) + ans;
//     n = n / 10;
//     i++;
//   }
//   cout << ans;

//   return 0;
// }