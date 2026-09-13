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

int main(){
    SeqList L;
    L.data = (ElemType *)malloc(IntSize * sizeof(ElemType)); //C风格的动态内存分配
    L.data = new ElemType[IntSize]; //C++风格的动态内存分配

    return 0;
}
