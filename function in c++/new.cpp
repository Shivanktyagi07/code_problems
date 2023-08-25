#include<iostream>
using namespace std;
int factorial(int n){
    int i,fact=1;
   for(i=1;i<=n;i++){
    fact=fact*i;}
return fact;
}
int ncr(int n,int r){
    int num=factorial(n);
    int deno=factorial(r)*factorial(n-r);
    int ans= num/deno;
    return ans;
    }
int main(){
    int n,r;
    cout <<"enter the value sof n and r=";
    cin>>n>>r;
cout<<"answer is="<<ncr(n,r)<<endl;
}