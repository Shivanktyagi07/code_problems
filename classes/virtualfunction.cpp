#include<iostream>
using namespace std;
class base{
    
    public:
       virtual void show(){
        cout<<"inside the base class"<<endl;
     }
    //   void show(){
    //     cout<<"inside the base class"<<endl;
    // }
};
class derived : public base{
public:
void show(){
    cout<<"inside the derived class"<<endl;
}

};

int main(){
    base* b;
    derived d;
    b = &d;
   b->show();
}


