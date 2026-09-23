#include <bits/stdc++.h>
using namespace std;
map<long long, long long> b;
long long i, j, num, k;

int main(){
    int n,q;
    cin >> n >> q;
    while (q--){
        cin >> num >> i >> j;
        if (num == 1){
            cin >> k;
            b[i*1000000+j]=k;
        }
        else cout << b[i*1000000+j] << endl;
    }
    return 0;
}