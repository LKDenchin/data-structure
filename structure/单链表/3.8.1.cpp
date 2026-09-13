// 在第i个位置插入新节点 在p节点之后插入新节点，如果前插入，则需要找到第i-1个节点。q->next=p->next; p->next=q;
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

int main(){
    Node *p;
    LinkList L;
    int i;
    cin >> i;
    p = GetElem(L, i-1);
    Node *s = new Node;
    s->next = p->next;
    p->next = s;
    return 0;
}