#include<iostream>
using namespace std;
int factorial(int n){

    if(n==0)
    return 1;

    return n*factorial(n-1);
}
int main(){
    int n;
    cout<<"enter the value of n=";
    cin>>n;
    cout<<"factorial of "<<n<<"="<<factorial(n);
}