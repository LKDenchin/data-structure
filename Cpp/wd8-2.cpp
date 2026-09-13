#include <bits/stdc++.h>
using namespace std;

struct student{
    string name;
    int age;
    string sex;
    int score;
}; //结构体初始化定义

int main(){
    struct student s1={"LKDenchin",18,"male",100};//集中定义
    /*struct student s1; 
    s1.name = "LKDenchin";
    s1.age = 18;*/ //分开定义
    cin >> s1.name >> s1.age >> s1.sex >> s1.score; //输入
    cout << s1.name << " " << s1.age << " " << s1.sex << " " << s1.score << endl;
    cout << "------------------"<<endl;
    //结构体数组
    struct student sarr[3];
    int i = 0;
    sarr[i] = s1;
    cout << sarr[i].name << sarr[i].age << sarr[i].sex << sarr[i].score << endl;
    return 0;
}