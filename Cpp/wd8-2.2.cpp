/*结构体对齐三大法则:
1自然对齐规则:结构体的成员将按照自然对齐原则来排列。自然对齐要求每个成员的地址是其数据类型大小的整数倍。
例如，一个int类型的成员通常会被对齐到4字节边界(整除4)，而一个double类型的成员通常会被对齐到8字节边界。
2填充字节:如果一个成员的大小不是对齐边界的整数倍，编译器通常会在其后添加一些填充字节，以确保下一个成员能:够正确对齐。
填充字节的大小取决于编译器和目标平台，通常。是1字节或更多。
3结构体的总大小:结构体的总大小通常等于其最大成员的大小的整数倍。这是为了确保结构体数组的每个元素都按照相同的规则对齐。*/

#include <bits/stdc++.h>
using namespace std;

struct student_type1{
    double score;
    int height;
    short age;

};
//short 是2字节整型数，int 是4字节整型数，double 是8字节浮点数。根据结构体对齐规则，student_type1的成员将按照以下方式排列：
//1. score: 8字节，按照8字节边界对齐，占用8字节。
//2. height: 4字节，按照4字节边界对齐，占用4字节。
//3. age: 2字节，按照2字节边界对齐，占用2字节。
//由于score是最大的成员，占用8字节，因此整个结构体的大小将是8字节的整数倍。
struct student_type2{
    int heiget;
    char sex;
    short age;
};

int main(){
    struct student_type1 s1={4,5,6};
    struct student_type2 s2={7,'m',8};
    cout << sizeof(s1) <<" "<< sizeof(s2)<<endl;
    return 0;
}