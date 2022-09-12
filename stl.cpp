#include <iostream>
#include <array>
#include<vector>
#include <deque>
#include <list>


using namespace std;

int main(){

    int basic[3] = {1,2,3};
    array<int, 4> a= {1,2,3,4};

    vector<int> n;
    n.push_back(1);
    // cout<< n.capacity()<<endl;
    for(int i:basic){
        cout << i <<endl;
    }

    deque<int> v;
    v.push_back(1);
    v.push_front(1);
    v.erase(v.begin(), v.begin()+1);
    return 0;
}
