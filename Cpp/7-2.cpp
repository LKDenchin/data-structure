#include <bits/stdc++.h>
using namespace std;

int main(){
    int t,total=0,count=0;
    cin >> t;
    int score[t];
    for (int i=0;i<t;i++){
        cin >> score[i];
        total += score[i];
        if (score[i]>=60) count++;
    }
    if (t!=0){
        double ava = (double)total/t;
        cout << "average = " <<fixed<<setprecision(2)<<ava<<endl;
        cout << "count = " << count << endl;
    }
    else {
        cout << "average = 0.00" << endl;
        cout << "count = 0" << endl;
    }
    return 0;
}