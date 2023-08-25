#include<iostream>
using namespace std;
class fact{
   public: 
    int n;
    int f=1;
//constructor:
   fact(int a){
    this->n=a;
   }
    //function:
    void getfact(){
{
        for(int i=1;i<=n;i++){
            f=f*i;
        }
        cout<<"factorial = "<<f<<endl;
    }
    }
};

int main(){
    
    int n;
    cout<< "enter the value of n = ";
    cin >> n;
    fact F(n);
    F.getfact();
}

