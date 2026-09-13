#include <bits/stdc++.h>
using namespace std;

//动态分配
#define IntSize 100
typedef int ElemType;
typedef struct
{
    ElemType *data;
    int MAXSIZE, length;
} SeqList;

int getElem(SeqList L, int i, ElemType &e)
{
    if (i<1 || i>L.length)
        return 0;
    return L.data[i-1];
}

int main(){
    SeqList L;
    L.data = (ElemType *)malloc(IntSize * sizeof(ElemType)); //C风格的动态内存分配
    L.data = new ElemType[IntSize]; //C++风格的动态内存分配

    return 0;
}
