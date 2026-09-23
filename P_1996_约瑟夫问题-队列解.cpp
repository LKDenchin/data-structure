#include <bits/stdc++.h>
using namespace std;

int main() {
    deque<int> deq;
    int n,m;
    cin >> n >> m;
    for (int i=1; i<=n; i++){
        deq.push_back(i);
    }
    while (!deq.empty()){
        for (int i=1; i<m; i++){
            deq.push_back(deq.front());
            deq.pop_front();
        }
        cout << deq.front() << " ";
        deq.pop_front();
    }
    return 0;
}