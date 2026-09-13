#include <bits/stdc++.h>
using namespace std;

#define IntSize 100
typedef int ElemType;
typedef struct
{
    ElemType *data;
    int MAXSIZE, length;
}SeqList;

bool Merge(SeqList A, SeqList B, SeqList &C)
{
    if (A.length + B.length > C.MAXSIZE)
        return false;
    int i=0, j=0, k=0; //i, j, k分别为A、B、C的下标
    while (i<A.length && j<B.length){
        if (A.data[i]<=B.data[j]){
            C.data[k++] = A.data[i++];
        }
        else {
            C.data[k++] = B.data[j++];
        }
    }
    while (i<A.length){
        C.data[k++] = A.data[i++];
    }
    while (j<B.length){
        C.data[k++] = B.data[j++];
    }
    C.length = k;
    return true;
}