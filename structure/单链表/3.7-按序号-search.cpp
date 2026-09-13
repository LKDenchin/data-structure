#include <bits/stdc++.h>
using namespace std;

typedef int Elemtype;
typedef struct Node
{
    Elemtype data;
    struct Node *next;
}Node, *LinkList;
//typedef struct Node *LinkList; // 定义LinkList为指向Node的指针类型

Node *GetElem(LinkList L, int i)
{
    int j=1;
    Node *p = L->next;
    if (i==0) return L;
    if (i<0) return NULL;
    while (p && j < i)
    {
        p = p->next;
        j++;
    }
    return p;
} //O(n)