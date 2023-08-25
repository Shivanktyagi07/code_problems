#include<iostream>
using namespace std;
void reverse(string &str,int i,int j){

    if(i>j)
    return;
 cout<<"recursive call"<<" "<<str<<endl;
    swap(str[i],str[j]);
    i++;
    j--;
       
       reverse(str,i,j);
}

int main(){

    string str="shivank";
    reverse(str,0,str.length()-1);

           cout<<str;
}