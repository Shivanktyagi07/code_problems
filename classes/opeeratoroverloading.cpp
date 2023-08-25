//OPERATOR OVERLOADING:
#include<iostream>
using namespace std;
class complex{
    int real,img;
    public:
    complex (int x = 0,int y = 0){
      real = x;
       img = y;
    }

    complex operator + (complex const & b){
        complex a;
        a.real = real + b.real;
        a.img = img + b.img;
        return a;
    }
    void show(){
        cout<< real<< " + i " << img;
    }

};
int main(){
    complex c1(2,3),c2(5,7);
    complex c3 = c1 + c2;
    c3.show();
    return 0;
}