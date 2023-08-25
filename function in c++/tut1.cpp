#include<iostream>
using namespace std;
float sum(float x,float y,int n){
    float sum;
sum=n*(2*x+(n-1)*y)/2;
    cout<<"sum is="<<sum<<endl;
return sum;
}
float tn(float x,float y,int n){
 float tn;
 tn=x+(n-1)*y;
cout<<"nth term is="<<tn<<endl;
return tn;
}
int main(){
  int n;
   float x,y;
    cout<<"enter values of 1st term=";
    cin>>x;
    cout<<"enter values of difference=";
    cin>>y;
    cout<<"enter values of n=";
    cin>>n;
    sum(x,y,n);
    tn(x,y,n);
}
