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

int LocateElem(SeqList L, ElemType e)
{
    for (int i=0;i<L.length;i++){
        if (L.data[i]==e)
        return i+1;
    }
    return 0;
}

int main(){
    SeqList L;
    L.data = (ElemType *)malloc(IntSize * sizeof(ElemType)); //C风格的动态内存分配
    L.data = new ElemType[IntSize]; //C++风格的动态内存分配

    return 0;
}
