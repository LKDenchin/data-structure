#include <bits/stdc++.h>
using namespace std;

#define MaxSize 50
typedef int ElemType;

typedef struct{
    ElemType data[MaxSize];
    int top;
}SeqStack;

//初始化
void InitStack (SeqStack &S){
    S.top = -1;
}

//判栈空
bool StackEmpty(SeqStack S){
    if (S.top == -1) return true;
    else return false;
}

//进栈
bool Push(SeqStack &S, ElemType x){
    if (S.top == MaxSize-1) return false; //判断栈是否已满
    S.data[++S.top]=x; //top开始时指向的是栈顶的第一个元素，所以要+1后放入新元素
    return true;
}

//出栈 栈非空时，先去栈顶元素值，再将栈顶指针-1
bool Pop(SeqStack &S, ElemType &x){
    if (S.top == -1) return false; //判断是否为空
    x=S.data[S.top--]; //--级别最低，所以先赋值给x再自减
    return true;
}

//读栈顶元素
bool GetTop(SeqStack S, ElemType &x){
    if (S.top == -1)
    return false;
    x=S.data[S.top];
    return true;
}