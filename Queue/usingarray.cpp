#include<iostream>
using namespace std;
int main(){
    int ar[]={5,1,15,20,25};
    int i,j,k;
    i=++ar[1];
    j=ar[1]++;
    k=ar[i++];
    cout<<i<<" "<<j<<" "<<k;
}
