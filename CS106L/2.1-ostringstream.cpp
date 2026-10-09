#include <bits/stdc++.h>
using namespace std;

int main() {
    //ostringstream oss("Ito-En Green Tea");
    ostringstream oss("Ito-En Green Tea", ostringstream::ate);
    cout << oss.str() << endl; // Ito-En Green Tea

    oss << "16.9 onces";
    cout << oss.str() << endl; // Ito-En Green Tea16.9 onces
    //if ostringstream oss("Ito-En Green Tea"); : cout is 16.9 oncesen Tea

}