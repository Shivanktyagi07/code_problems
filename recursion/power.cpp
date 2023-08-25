#include<iostream>
using namespace std;
int power(int base,int n){

    if(n==0)
    return 1;

    return base*power(base,n-1);
    }
int main(){
    int n,base;
     cout<<"enter the value of base=";
    cin>>base;
 cout<<"enter the value of n=";
    cin>>n;
    cout<<power(base,n);
}



