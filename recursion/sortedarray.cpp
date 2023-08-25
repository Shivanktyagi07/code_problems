#include<iostream>
using namespace std;
bool sorted(int arr[],int n){
     
     if(n==0||n==1)
     return true;

     if(arr[0]>arr[1])
     return false;
        else{
         sorted(arr+1,n-1);
        }

}
int main(){
    int arr[6];
    cout<<"enter the elements of sn array=";
     for (int i = 0; i < 6; i++)
    {
        cin>>arr[i];
    }

     bool ans=sorted(arr,6);
     if(ans){
        cout<<"array is sorted"<<endl;
    
     }
     else{
        cout<<"array is not sorted";
}
    
    return 0;
}

