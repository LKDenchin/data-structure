#include <bits/stdc++.h>
using namespace std;
vector<int> vec;

int main(){
    int n,m;
    cin >> n >> m;
    while (n--){
        int x;
        cin >> x;
        vec.push_back(x);
    }
    while (m--){
        long num;
        cin >> num;
        cout << vec[num-1] << endl;
    }
}