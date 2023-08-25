#include<iostream>
using namespace std;
int fib(int n)
{
    int x=0,y=1,z;
        cout<<x<<" "<<y<<" ";
    for (int i = 0 ; i < n; i++)
    {
         z=x+y;
        cout<<" "<<z<<" ";
         x=y;
        y=z;}
       /// cout<<endl<<"last term="<<z<<endl;
         return z;
    }
    int main(){
        int r;
        cout<<"enter the value of n=";
        cin>>r;
        fib(r);
}

