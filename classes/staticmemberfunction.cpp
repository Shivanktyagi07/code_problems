#include<iostream>
using namespace std;
//PROGRAM FOR STATIC MEMBER FUNCTION:
class demo{
    int a,b;
    static int z;
    public:
    void getdata(int x ,  int y){
        a = x;
        b = y;
        z = z+1;
    }
    void putdata(){
        cout << " a = "<<a<<endl;
        cout <<" b = "<<b<<endl;
        cout << " z = "<<z<<endl;
       
    }
    //static member function:
    static void setdata(){
        cout<< " valu of z = "<<z<<endl;
    }
    
};
int demo::z;
int main(){
    demo s;
    s.getdata(2 , 6);
    s.putdata();
    demo::setdata();
}