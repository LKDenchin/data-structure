#include <bits/stdc++.h>
using namespace std;
int i = 10; //不建议使用全局变量，有概率错误

void print(int n){
    cout << "I am print " << n << endl;
}
int main(){
    {
        int j = 5;
    }//局部变量只在距离自己最近的打括号内有效。
    cout << "I am print "<< i << endl;
    //i = 5; //change variable i(全局)
    int i = 5; //change variable i(局部)
    /*注意：C这里修改局部变量，print(i)会输出10，但是Cpp不变。
    因为Cpp有局部屏蔽，会优先找最近的变量值*/
    print (i);
    return 0;
}