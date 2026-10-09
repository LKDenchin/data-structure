#include <bits/stdc++.h>
using namespace std;

int stringToInteger(const string& s) {
    //fill me!
    istringstream iss(s);
    printStateBits(iss);

    int result;
    iss >> result;
    printStateBits(iss);
    return result;
}

int printStateBits(const istream& iss){
    cout << "Statebits: ";
    cout <<(iss.good() ? "G" : "-");
    cout <<(iss.eof() ? "E" : "-");
    cout <<(iss.fail() ? "F" : "-");
    cout <<(iss.bad() ? "B" : "-");
    cout << endl;
    //automatically flushed! why?
}

int main(){
    
    return 0;
}