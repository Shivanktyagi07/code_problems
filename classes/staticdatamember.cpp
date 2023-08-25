#include<iostream>
using namespace std;
//PROGRAM FOR STATIC DATA MEMBER:
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
};
int demo::z;
int main(){
    demo s;
    s.getdata(10 , 20);
    s.putdata();
    demo w;
    w.getdata(30 , 40);
    w.putdata();
}








