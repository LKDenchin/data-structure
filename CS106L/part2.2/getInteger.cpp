#include <bits/stdc++.h>
using namespace std;

int getInteger(const string& prompt);
int bestInteger(const string& prompt="Enter an integer: ", const string& reprompt="Please try again.");

int main(){
    // int num = getInteger("Enter a line: ");
    // cout << "You entered: " << num << endl;
    // return 0;
    int num = bestInteger();
    cout << "You entered: " << num << endl;
    return 0;
}

int getInteger(const string& prompt){
    while (true){
        cout << prompt;
        string line;
        if (!getline(cin, line)){ //when does it fail?
            throw domain_error("getline failed");
        }
        istringstream iss(line);

        int result; char trash;
        if (iss >> result && !(iss >> trash)){
            return result;
        }
    }
}

int bestInteger(const string& prompt, const string& reprompt){
    while (true){
        cout << prompt;
        string line; int result; char trash;
        if (!getline(cin, line)){
            throw domain_error("getline failed");
        }
        istringstream iss(line);
        if (iss >> result && !(iss >> trash)){
            return result;
        }
        cout << reprompt << endl;
    }
}