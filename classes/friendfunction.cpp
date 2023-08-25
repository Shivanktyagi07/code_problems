#include<iostream>
using namespace std;
class demo{
    int a;
    int b;
    public:
     void getdata();
     friend int sum(demo);
};
void demo::getdata(){
    cout<<"enter the value of a and b";
    cin >>a >>b;
}
int sum(demo s){
    return s.a+s.b;
}
int main(){
    demo s;
   s.getdata();
   cout<<"sum = "<<sum(s);
}