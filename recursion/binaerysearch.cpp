#include<iostream>
using namespace std;
void print(int arr[], int s, int e){ 
    for (int i = s; i <= e; i++)
    {
        cout<<arr[i]<<" ";
    }
   cout<<endl; 
}
bool search(int arr[],int s,int e,int key){
      print(arr,s,e);
    if(s>e)
    return false;
      int  mid=(s+e)/2;
      cout<<"value of mid is"<<arr[mid]<<endl;
    if(arr[mid]==key)
    return true;
    if(arr[mid]>key){
      cout<<"go tothe right part of the array ";
     return search(arr,s,mid-1,key);}
     else{
     cout<<"go tothe left part of the array ";
     return search(arr,mid+1,e,key);  } 
}
int main(){
int arr[5]={1,2,3,4,5};
int n =5;
int key;
cout<<"enter the cvalue of key =";
cin>>key;
 cout<<"key is present"<<search(arr,0,n-1,key);
}

















