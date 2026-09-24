#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1000005;
list<int> ls;
list<int>::iterator pos[MAXN];
bool deleted[MAXN];

int main(){
    int n;
    cin >> n;

    ls.push_back(1);
    pos[1] = ls.begin();
    for (int i=2; i<=n; i++){
        int k,p;
        cin >> k >> p;
        if (p==0){
            pos[i] = ls.insert(pos[k], i);
        }
        else pos[i] = ls.insert(next(pos[k]), i);
    }
    int m;
    cin >> m;
    while (m--){
        int x;
        cin >> x;
        if (!deleted[x]){
            deleted[x] = true;
            ls.erase(pos[x]);
        }
    }
    for (int id : ls){
        cout << id << " ";
    }
    cout << endl;

}