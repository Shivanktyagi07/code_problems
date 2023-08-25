// try and catch method:
#include<iostream>
using namespace std;
int main(){
    int a , b , c;
    cout <<" enter the value of a nad b :";
    cin>>a>>b;
    try{
        if(b!=0){
            c = a/b;
            cout<<" value of c = "<<c;
        }
        else{
            throw(b);
        }
    }
    catch(int b){
        cout<<"cant divide by 0"<<endl;
    }
    return 0;
}