
#include <iostream>
using namespace std;

int main() {
    // single Number
  int nums[7] = {1,2,1,5,4,5,4};
  int ans = 0;
  for(int i=0; i < 7; i++){
    ans = ans ^ nums[i];
  }
}





