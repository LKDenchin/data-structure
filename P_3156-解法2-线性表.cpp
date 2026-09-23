#include <bits/stdc++.h>
using namespace std;
#define IntSize 100
typedef int ElemType;

typedef struct {
    ElemType *data;
    int MAXSIZE, length;
} SqList;

void InitList(SqList &L, int capacity) {
    L.data = new ElemType[capacity]; // C++ style dynamic memory allocation
    L.MAXSIZE = capacity;
    L.length = 0;
}
void DestroyList(SqList &L) {
    if (L.data != nullptr) {
        delete[] L.data; // Free the allocated memory
        L.data = nullptr; // Avoid dangling pointer
    }
    L.length = 0;
    L.MAXSIZE = 0;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    SqList L;
    InitList(L,n);
    for (int i=0; i<n; i++){
        cin >> L.data[i];
    }
    L.length = n; // Set the length of the list after input
    while (m--){
        int num;
        cin >> num;
        if (num > 0 && num <= L.length) {
            cout << L.data[num-1] << endl; // Output the requested element
        }
    }
    DestroyList(L);
    return 0;
}