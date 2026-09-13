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
    Node *p, *q;
    LinkList L;
    int i;
    cin >> i;
    // 删除节点
    p = GetElem(L, i-1);
    q = p->next;//q = p->next;  //保存第i个节点的地址
    p->next = q->next; //删除第i个节点
    free(q); //释放第i个节点的空间
    return 0;
}