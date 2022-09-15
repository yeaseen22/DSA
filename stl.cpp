#include <iostream>
#include <bits/stdc++.h>
#include <array>
// #include<vector>
// #include <deque>
// #include <list>


using namespace std;

int main(){

    array<int, 5> arr;
    arr.fill(10);
    for(int i=0; i < arr.size(); i++){
        cout << arr.at(i) << ",";
    }

    // vector<int> n;
    // n.push_back(1);
    // // cout<< n.capacity()<<endl;
    // for(int i:basic){
    //     // cout << i <<endl;
    // }

    // deque<int> v;
    // v.push_back(1);
    // v.push_front(1);
    // v.erase(v.begin(), v.begin()+1);
    return 0;
}
