#include <iostream>
#include <bits/stdc++.h>
#include <string>

 using namespace std;
 
 struct car {
    string name;
    string color;
    int maxSpeed;
    int model;
 };

 void fun (car x) {
    cout << "Name" << x.name << endl;
    cout << "Color" << x.color << endl;
    cout << "Model" << x.model << endl;
    cout << "maxSpeed" << x.maxSpeed << endl;
 }
 

 int main (){

 car c1 = {"BMW", "Red", 250, 2022};
 car c2 = {"B", "Red", 230, 2023};

 fun(c1);


 return 0;
}



