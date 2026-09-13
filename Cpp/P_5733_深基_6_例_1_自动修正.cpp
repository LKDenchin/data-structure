#include <bits/stdc++.h>
using namespace std;

int main(){
    string cha;
    cin >> cha;
    for (int i=0;i<cha.size();i++){
        if (cha[i]>'a'&&cha[i]<'z') cha[i]-=32;
        cout << cha[i];
        
    }
    return 0;
}