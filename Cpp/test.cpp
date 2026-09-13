#include <bits/stdc++.h>
using namespace std;

void fun (int n){
    static int s=1;
    s=s+n;
    cout << s << endl;
}

int main(){
    fun(1);
    fun(1);
    fun(1);
}