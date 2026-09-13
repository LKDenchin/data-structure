#include <bits/stdc++.h>
using namespace std;

class Rectangle {
private:
    int width;
    int length;
public:
    int getArea(){
        return length*width;
    }
    int getPlength(){
        return 2*(length*width);
    }
    void setvalue(int w, int l){
        width = w;
        length = l;
    }
    Rectangle(int w = 10, int l =10);
    Rectangle(int w, int l):width(w),length(l){
        cout << "调用1" << endl;
    }
    ~Rectangle();
};

int main(){
    Rectangle rect(50,100);
    //rect.setvalue(50,100);
    cout << rect.getPlength() << endl;

}