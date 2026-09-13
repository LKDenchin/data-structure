#include <bits/stdc++.h>
using namespace std;

#define MaxSize 50
typedef int ElemType;
//共享栈（2个顺序栈共享一个数据空间）
typedef struct{
    ElemType data[MaxSize];
    int top;
}SeqStack;