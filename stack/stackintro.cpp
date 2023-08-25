#include<iostream>
#include<stack>
using namespace std;
int main(){
     //CREATING A STACK:
    stack <int> s;

    //PUSH OPERATIONS:
    s.push(2);
    s.push(3);

    //POP OPERATIONS:
    s.pop();
    s.pop();

    cout<<"top of stack is ="<<s.top()<<endl;

    if(s.empty()){
        cout<<"stack is empty:"<<endl;

    }
    else{
        cout<<"stack is not empty:";
    }


}