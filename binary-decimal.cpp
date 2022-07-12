#include <iostream>
#include <math.h>

using namespace std;

int main()
{

  // negative decimal to binary
  int n;
  int i = 31;
  int arr[32] = {0};
  cin >> n;
  if (n == 0)
  {
    cout << " ";
  }
  else if (n > 0)
  {
    while (n > 0)
    {
      arr[i] = n % 2;
      i--;
      n = n / 2;
    }
  }
  else
  {
    int x, counter = 0;
    x = abs(n);
    while ((x > 0) || (i >= 0))
    {
      if (x > 0)
      {
        arr[i] = x % 2;
      }
      if ((counter == 0) && (arr[i] == 1))
      {
        counter++;
        i--;
        x = x / 2;
        continue;
      }
      if (counter)
      {
        if (arr[i] == 1)
        {
          arr[i] = 0;
        }
        else
        {
          arr[i] = 1;
        }
      }
      i--;
      x = x / 2;
    }
  }
  for (i = 0; i < 32; i++)
  {
    cout << arr[i] << " ";
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
  int n;
  cin >> n;

  int i = 0;
  int ans = 0;

  while (n != 0)
  {
    int digit = n % 10;

    if (digit == 1)
    {
      ans = ans + pow(2, i);
    }
    n = n / 10;
    i++;
  }
  cout << ans << endl;
  // another afforoach o binary to decimal

  int n;
  cout << "Enter a  binary number" << endl;
  cin >> n;
  long long int ans = 0;
  int i = 0;
  while (n > 0)
  {

    int bit = n & 1;
    ans = bit * pow(2, i) + ans;
    n = n / 10;
    i++;
  }
  cout << ans;

  return 0;
}