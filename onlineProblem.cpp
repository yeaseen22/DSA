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

int hammingWeight(uint32_t n, uint32_t n1)
{

  int count = 0;
  int count2 = 0;

  while (n != 0)
  {
    if (n & 1)
    {
      count++;
    }
    n = n >> 1; //(ore n = n/2;)
  }

  while (n1 != 0)
  {
    if (n1 & 1)
    {
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

// set matrix to Zero
void setZeroes(vector<vector<int>> &matrix)
{
  int rows = matrix.size(), cols = matrix[0].size();
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      if (matrix[i][j] == 0)
      {

        int ind = i - 1;
        while (ind >= 0)
        {
          if (matrix[ind][j] != 0)
          {
            matrix[ind][j] = -1;
          }
          ind--;
        }
        ind = i + 1;
        while (ind < rows)
        {
          if (matrix[ind][j] != 0)
          {
            matrix[ind][j] = -1;
          }
          ind++;
        }
        ind = j - 1;
        while (ind >= 0)
        {
          if (matrix[i][ind] != 0)
          {
            matrix[i][ind] = -1;
          }
          ind--;
        }
        ind = j + 1;
        while (ind < cols)
        {
          if (matrix[i][ind] != 0)
          {
            matrix[i][ind] = -1;
          }
          ind++;
        }
      }
    }
  }
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      if (matrix[i][j] <= 0)
      {
        matrix[i][j] = 0;
      }
    }
  }
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
  while (x != 0)
  {

    int digit = x % 10;

    if ((ans > INT_MAX / 10) || (ans < INT_MIN / 10))
    {
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
  cout << a << endl;
  //  reverse(123);

  vector<vector<int>> arr;
  arr = {{0, 1, 2, 0}, {3, 4, 5, 2}, {1, 3, 1, 5}};
  setZeroes(arr);
  cout << "The Final Matrix is " << endl;
  for (int i = 0; i < arr.size(); i++)
  {
    for (int j = 0; j < arr[0].size(); j++)
    {
      cout << arr[i][j] << " ";
    }
    cout << "\n";
  }

  return 0;
}