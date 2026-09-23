#include <bits/stdc++.h>
using namespace std;
typedef int ElemType;

typedef struct DNode{
    ElemType data;
    struct DNode *prior,*next;
}DNode,*DLinkList;


int main() {
    int n,m;
    cin >> n >> m;
    DNode *head = new DNode;
    head->data = 1;
    head->prior = nullptr;
    head->next = nullptr;

    DNode *tail = head;
    for (int i=2; i<=n; i++){
        DNode *node = new DNode;
        node->data = i;
        node->prior = tail;
        node->next = nullptr;
        tail->next = node;
        tail = node;
    }
    tail->next = head;
    head->prior = tail;

    DNode* curr = head;

    for (int count=0; count<n; count++){
        for (int step = 1; step < m; step++){
            curr = curr->next;
        }
        cout << curr->data << " ";
        DNode* next_person = curr->next;

        if (curr->next != curr){
            curr->prior->next = curr->next;
            curr->next->prior = curr->prior;
        }
        delete curr;
        curr = next_person;
    }
    cout << endl;
    return 0;
}