//COPY CONSTRUCTOR:
#include<iostream>
using namespace std;
class demo{
    int a;
    public:
    //default constructor:
    demo(){
        a=10;
    }
    //paramertised constructor:
    demo(int x){
        a = x;
    }
    //COPY CONSTRUCTOR:
    demo(demo &t){
        a = t.a;
    }
    void show(){
        cout<<"value of a is = "<< a << endl;
    }
};

int main(){
    demo s;
    s.show();
    demo q(20);
    q.show();
    demo p(q);
    p.show();

}