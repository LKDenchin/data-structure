#include <bits/stdc++.h>
using namespace std;
typedef int ElemType;
#define MAXSIZE 50

typedef struct {
    ElemType data[MAXSIZE];
    int top;
} SqStack;

bool Push(SqStack &S, ElemType x) {
    if (S.top == MAXSIZE - 1) return false; // 栈满
    S.data[++S.top] = x;
    return true;
}

//出栈 栈非空时，先去栈顶元素值，再将栈顶指针-1
bool Pop(SqStack &S, ElemType &x){
    if (S.top == -1) return false; //判断是否为空
    x=S.data[S.top--]; //--级别最低，所以先赋值给x再自减
    return true;
}

int main() {
    SqStack S;
    S.top = -1; // 初始化栈顶指针
    char n;
    int num = 0;
    while (cin >> n && n != '@'){
        if (n>='0' && n<='9'){
            num = num*10 + (n-'0'); // 拼接数字
        }
        else if (n=='.'){
            Push(S,num);
            num = 0; // 重置数字
        }
        else {
            int a,b;
            Pop(S,b);
            Pop(S,a);
            if (n=='+') Push(S,a+b);
            else if (n=='-') Push(S,a-b);
            else if (n=='*') Push(S,a*b);
            else if (n=='/') Push(S,a/b);
        }
    }
    int ans;
    Pop(S,ans);
    cout << ans << endl;
    return 0;
}