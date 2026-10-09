#include <bits/stdc++.h>
using namespace std;

int main() {
    istringstream iss("16.9 Ounces");
    //double amount;
    //if use int?
    int mount;
    string unit;
    //iss >> amount;
    iss >> mount;
    iss >> unit;
    

    //cout << amount << " " << unit << endl; //16.9 Ounces
    //cout << amount/2 << endl; //8.45
    cout << mount/2 <<" " << unit << endl; //8 .9
}