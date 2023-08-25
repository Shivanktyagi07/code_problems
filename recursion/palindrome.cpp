#include<iostream>
using namespace std;
bool palindrome(string &str,int i,int j){

    if(i>j)
    return true ;
    
     if(str[i]!=str[j]){
 return false;
     }
     else{
        palindrome(str,i+1,j-1);
     }
}
int main(){

    string name="shivank tyagi";
    cout<<name<<endl;
bool str=palindrome(name,0,name.length()-1);
    if(str){
        cout<<"it is palindrome";
    }
    else{
        cout<<"its not a plindrome";
    }
}
