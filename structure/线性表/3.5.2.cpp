#include <bits/stdc++.h>
using namespace std;

#define IntSize 100
typedef int ElemType;
typedef struct
{
    ElemType *data;
    int MAXSIZE, length;
}SeqList;

bool ListInsert(SeqList &L, int i, ElemType e)
{
    int k;
    if (L.length == L.MAXSIZE) //顺序表已满，不能插入
        return false;
    if (i<1 || i>L.length+1)
        return false;
    if (i<=L.length){
        for (k=L.length-1;k>=i-1;k--){
            L.data[k+1]=L.data[k];
        }
    }
    L.data[i-1]=e;
    L.length++;
    return true;
}

int main(){
    SeqList L;
    L.data = new ElemType[IntSize]; //C++风格的动态内存分配
    L.MAXSIZE = IntSize;
    L.length = 0;
}