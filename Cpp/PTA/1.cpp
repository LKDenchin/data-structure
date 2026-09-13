#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

struct Person {
    string name;
    string birth;
    string phone;
};
bool cmp(const Person& a, const Person& b) {
    return a.birth < b.birth;
}

int main() {
    int n;
    if (!(cin >> n)) return 0;

    vector<Person> list(n);
    for (int i = 0; i < n; ++i) {
        cin >> list[i].name >> list[i].birth >> list[i].phone;
    }
    sort(list.begin(), list.end(), cmp);
    for (int i = 0; i < n; ++i) {
        cout << list[i].name << " " << list[i].birth << " " << list[i].phone << endl;
    }

    return 0;
}