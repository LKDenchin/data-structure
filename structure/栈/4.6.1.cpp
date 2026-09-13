//栈的链式结构
#include <bits/stdc++.h>
using namespace std;

#define MaxSize 50
typedef int ElemType;

typedef struct LinkNode{
    ElemType data;
    struct LinkNode *next;
}*LiStack; 