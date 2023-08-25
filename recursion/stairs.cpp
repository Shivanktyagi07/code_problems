#include<iostream>
using namespace std;

int reach(int n){
      if(n<0)
      return 0;
      if(n==0)
      return 1;


     int ans=reach(n-1)+reach(n-2);
return ans;
}
int main(){
    int n;
    cout<<"enter the value of n=";
    cin>>n;
      cout<<reach(n);
    
    return 0;

}