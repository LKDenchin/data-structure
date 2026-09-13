#include <bits/stdc++.h>
using namespace std;

#define IntSize 100
typedef int ElemType;
typedef struct
{
    ElemType *data;
    int MAXSIZE, length;
}SeqList;

bool ListDelete(SeqList &L, int i, ElemType &e)
{
    if (L.length == 0) //顺序表为空，不能删除
        return false;
    if (i<1 || i>L.length)
        return false;
    e = L.data[i-1];
    if (i<L.length){
        for (int k=i;k<L.length;k++){
            L.data[k-1]=L.data[k];
        }
    }
    L.length--;
    return true;
}

int main(){
    SeqList L;
    L.data = new ElemType[IntSize]; //C++风格的动态内存分配
    L.MAXSIZE = IntSize;
    L.length = 0;
}