#include <bits/stdc++.h>
using namespace std;

int main() {
    int v, N;
    cin >> v >> N;
    if (v == 0) {
        cout << 0 << endl;
        return 0;
    }
    vector<int> digits;
    while (v > 0) {
        digits.push_back(v % N);
        v /= N;
    }
    for (int i = digits.size() - 1; i >= 0; --i) {
        cout << digits[i];
    }
    cout << endl;

    return 0;
}