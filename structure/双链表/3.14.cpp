#include <bits/stdc++.h>
using namespace std;

typedef int Elemtype;
typedef struct Node
{
    Elemtype data;
    struct Node *prior, *next;
} Node, *LinkList;