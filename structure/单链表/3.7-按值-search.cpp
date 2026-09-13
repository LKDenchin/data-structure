#include <bits/stdc++.h>
using namespace std;

typedef int Elemtype;
typedef struct Node
{
    Elemtype data;
    struct Node *next;
}Node, *LinkList;
//typedef struct Node *LinkList; // 定义LinkList为指向Node的指针类型

Node *LocateElem(LinkList L, Elemtype e){
    Node *p = L->next;
    while (p!=NULL && p->data!=e)
    {
        p = p->next;
    }
    return p;
}//O(n)