#include <iostream>
using namespace std;

int main()
{
    // int n;
    // cin >> n;

    // for (int row = 1; row <= n; row++)
    // {
    //     for (int col = 1; col <= row; col++)
    //     {
    //         char ch = ('A' + row + col - 2);
    //         cout<< ch;
    //     }
    //     cout << endl;
    // }

    // int n;
    // cin >> n;

    // for (int row = 1; row <= n; row++)
    // {
    //   char ch = ('A' + n - row);
    //     for (int col = 1; col <= row; col++)
    //     {
    //       cout<< ch;
    //       ch++;
    //     }
    //     cout << endl;
    // }

    // int n;
    // cin >> n;

    // for (int row = 1; row <= n; row++)
    // {
    //   // print space
    //   int space = n - row;
    //   while(space){
    //     cout << " ";
    //     space --;
    //   }
    //   // print start
    //   for(int col = 1; col <= row; col++){
    //       cout<< "*";
    //   }
    //     cout<< endl;
    // }

    // int n;
    // cin >> n;

    // for (int row = 1; row <= n; row++)
    // {

    //     for (int col = 1; col <= n - row + 1; col++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    // int n;
    // cin >> n;

    // for (int row = 1; row <= n; row++)
    // {
    //   // print space
    //   int space = row-1;
    //   while(space){
    //     cout << " ";
    //     space --;
    //   }
    //   // print start
    //   for(int col =1; col <= n-row+1; col++){
    //       cout<< "*";
    //   }
    //     cout<< endl;
    // }

    //      int n;
    //     cin >> n;

    //     for (int row = 1; row <= n; row++)
    //     {
    //       // print space
    //       int space = n-row+1;
    //       while(space){
    //         cout << " ";
    //         space --;
    //         }
    //       // print start
    //       for(int col = 1; col <= row; col++){
    //           cout<< row;
    //       }
    //         cout<< endl;
    //     }

    // int n;
    // cin >> n;

    // for (int row = 1; row <= n; row++)
    // {
    //     int start = row;
    //     for (int col = 1; col <= n - row + 1; col++)
    //     {
    //         cout << start;
    //         start++;
    //     }
    //     cout << endl;
    // }

    //     int n;
    //     cin >> n;

    //   int start = 1;
    //   for(int row = 1; row <= n; row++){

    //     for(int col = 1; col <= row; col++){
    //       cout << start;
    //       start ++;
    //     }
    //     cout << endl;
    //   }

    // int n;
    // cin >> n;

    // for (int row = 1; row <= n; row++)
    // {
    //     // print space
    //     int space = n - row;
    //     while (space)
    //     {
    //         cout << " ";
    //         space--;
    //     }
    //     // print start
    //     int stape = 1;
    //     for (int col = 1; col <= row; col++)
    //     {
    //         cout << stape;
    //         stape++;
    //     }

    //     for (int cell = 1; cell <= row - 1; cell++)
    //     {
    //         cout << row - cell;
    //         stape++;
    //     }
    //     cout << endl;
    // }

    int n;
    cin >> n;

    for (int row = 1; row <= n; row++)
    {
        // print number
        int numbers = 1;
        for (int num = 1; num <= n - row + 1; num++)
        {
            cout << numbers;
            numbers++;
        }
        // print star
        for (int col = 1; col <= row - 1; col++)
        {
            cout << "**";
        }
        int start = n - row + 1;
        for (int cell = 1; cell <= n - row + 1; cell++)
        {
            cout << start;
            start--;
        }
        cout << endl;
    }

    return 0;
}