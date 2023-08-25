#include<iostream>
using namespace std;
void print(int arr[],int size){
    cout<<"size of an array is"<<size<<endl;
      for (int i  = 0; i < size; i++)
      {
        cout<<arr[i]<<" ";
      }
     cout<<endl; 
}
bool search(int arr[],int size,int key){
    print(arr,size);
            if(size==0)
    return false;
    if(arr[0]==key)
    return true;

    return search(arr+1,size-1,key);

}

int main(){
    int arr[5]={1,2,3,4,5};
    int key,size=5;
    cout<<"enter the value of key= ";
    cin>>key;

bool ans=search(arr,5,key);
if(ans)

cout<<key<<" is present"<<endl;
else{
cout<<key<<" is not preset"<<endl;
}
return 0;
}



