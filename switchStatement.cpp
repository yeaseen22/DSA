#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{

    // int num = 2;
    // char ch = '1';
    // cout << endl;
    // switch (ch)
    // {
    // case 1:
    //     cout << "First" << endl;
    //     break;

    // case 2:
    //     cout << "Second" << endl;
    //     break;

    // case '1':
    //     cout << "Second" << endl;
    //     break;

    // default:
    //     cout << " It is default case " << endl;
    // }

    // while (1)
    // {
    //     switch (1)
    //     {
    //     case 1:
    //         cout << "Hello World!";
    //         continue; // not a valid syntex

    //     default:
    //         cout << "nothing found " << endl;
    //         break;
    //     }
    //     exit(0);
    // }

    // int a, b;
    // cout << "Enter the value of a " << endl;
    // cin >> a;

    // cout << "Enter the value of b " << endl;
    // cin >> b;

    // char op;
    // cout << "Enter the operation you want to perform " << endl;
    // cin >> op;

    // switch (op)
    // {
    // case '+':
    //     cout << (a + b) << endl;
    //     break;
    // case '-':
    //     cout << (a - b) << endl;
    //     break;
    // case '*':
    //     cout << (a * b) << endl;
    //     break;
    // case '/':
    //     cout << (a / b) << endl;
    //     break;
    // case '%':
    //     cout << (a % b) << endl;
    //     break;
    // default:
    //     cout << "Please Enter a valid operation " << endl;
    // }

    // enter amount and tell how many 100 taka 50, 20, 1
    int amount;
    cout << "Enter the amount" << endl;
    cin >> amount;
    int Tk100, Tk50, Tk20, Tk1;

    
    
    switch (1)
    {
    case 1:
        Tk100 = amount / 100;
        amount = amount % 100;
        cout << amount << endl;
        cout << "No of 100 Taka notes required are=" << Tk100 << endl;

    case 2:
        Tk50 = amount / 50;
        amount = amount % 50;
        cout << "No of 50 Taka notes required are=" << Tk50 << endl;

    case 3:
        Tk20 = amount / 20;
        amount = amount % 20;
        cout << "No of 20 Taka notes required are=" << Tk20 << endl;

    case 4:
        Tk1 = amount / 1;
        amount = amount % 1;
        cout << "No of 1 Taka notes required are=" << Tk1 << endl;
    }

    cout << endl;
    return 0;

}