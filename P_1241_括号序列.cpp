#include <bits/stdc++.h>
using namespace std;
stack<int> s;
bool match(char l, char r) {
    return (l == '(' && r == ')') || (l == '[' && r == ']');
}

char mate(char c) {
    if (c == '(') return ')';
    if (c == ')') return '(';
    if (c == '[') return ']';
    return '[';
}

int main() {
    string str;
    cin >> str;
    vector<bool> matched(str.size(), false);

    for (int i=0;i<str.size();i++){
        if (str[i]=='(' || str[i]=='[') s.push(i);
        else {
            if (!s.empty() && match(str[s.top()], str[i])) {
                matched[s.top()] = true;
                matched[i] = true;
                s.pop();
            }
        }
    }
    string ans;
        for (int i = 0; i < str.size(); i++) {
            if (matched[i]) {
                ans += str[i];
            } else {
                if (str[i] == '(' || str[i] == '[') {
                    ans += str[i];
                    ans += mate(str[i]);
                } else {
                    ans += mate(str[i]);
                    ans += str[i];
                }
            }
        }

    cout << ans << endl;
    return 0;
}