#include<iostream>
using namespace std;
void bubblesort(int arr[],int n){

    if(n==0 || n==1){
        return ;
    }

    for (int i = 0; i < n-1; i++)
    {
        if(arr[i]>arr[i+1]){
            int temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;

        }
    }
     bubblesort(arr,n-1);
}

int main(){

    int arr[6];
    int n=6;
    cout<<"enter elements : ";
     for (int i = 0; i < n; i++)
      {
        cin>>arr[i];
      }
      
    bubblesort(arr,6);
      for (int i = 0; i < n; i++)
      {
        cout<<arr[i]<<" ";
      }
      
}