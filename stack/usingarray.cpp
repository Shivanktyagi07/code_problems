#include<iostream>
using namespace std;

class stack{

    public:
    int *arr;
    int top;
    int size;

    stack(int size)
    {
       this->size=size;
       arr=new int[size];
       top=-1;
    }

      void push(int element){
        if(size-top>1){
             top++;
             arr[top]=element;
             }
        else{
            cout<<"stack is overflow:"<<endl;
        }
      }

      void pop(){
              if(top>=0){
                top--;
              }
              else{
                cout<<endl<<"stcak is underflow :"<<endl;
              }

      }

     int peak(){
      if(top>=0){
             return arr[top];}
             else{
              cout<<"stack is empty"<<endl; 
             }
          }

bool isempty(){
        if(top=-1)
        return true;
        else{
            return false;
        }
    }

};

int main(){

    stack st(5);
    st.push(22);
    st.push(33);
    st.push(44);

    cout<<"top of stack is ="<<st.peak()<<endl;
    st.pop();
    //st.peak()
    cout<<"top of stack is ="<<st.peak()<<endl;
     st.pop();
    //st.peak()
    cout<<"top of stack is ="<<st.peak()<<endl;
     st.pop();
    //st.peak()
    cout<<"top of stack is ="<<st.peak()<<endl;
     
}
