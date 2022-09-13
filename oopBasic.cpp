
#include <iostream>
// #include "basic-oop2.cpp"
using namespace std;

class wealth{

    // properties

    public:
    char name[100];
    int health;
    char level;
};


int main(){

    // creating object
    wealth h1;
    // cout << h1.health << endl;

    h1.health = 20;

    // cout<<sizeof(h1) <<endl;
    cout << h1.health << endl;
    return 0;
}

