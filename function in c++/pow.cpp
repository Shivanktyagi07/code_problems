#include<iostream>
#include<cmath>
using namespace std;
int power(int x,int y){
    int ans;
    ans=pow(x,y);
    cout<<ans;
   //3 2 return ans;
}
int main(){
    int x,y;
    cout<<"enter values =";
    cin>>x>>y;
    cout<<"power is=";
    power(x,y);
}
