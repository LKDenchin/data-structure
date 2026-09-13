#include <iostream>
using namespace std;

//静态分配
#define MAXSIZE 20

typedef int ElemType;
typedef struct
{
    ElemType data[MAXSIZE];
    int length;
} SqList;