#include<iostream>
using  namespace std;
void saydigit(int n,string arr[]){
    
   if(n==0)
   return ;
   
   int digit=n%10;
   n=n/10;

     saydigit(n ,arr);

        cout<<" "<<arr[digit];
  }
int main(){
    string arr[10]={"zero","one","two","three"
    ,"four","five","sux","seven","eight","nine"};
     int n;
     cout<<"enter the vkue of n=";
     cin>>n;
     saydigit(n,arr);
     
    
    return 0;
}






