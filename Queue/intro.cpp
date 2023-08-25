#include<iostream>
#include<queue>
using namespace std;
int main()
{

    queue<int> s;
    s.push(11);
    cout<<" front element sis "<<s.front()<<endl;

    cout<<" size of the queue is "<< s.size()<<endl;
    s.push(12);
    cout<<" size of the queue is "<< s.size()<<endl;
    s.push(13);
    cout<<" size of the queue is "<< s.size()<<endl;

     cout<<" front element sis "<<s.front()<<endl;
     

     s.pop();
     s.pop();
     s.pop();
     cout<<" size of the queue is "<< s.size()<<endl;
     if(s.empty()){
        cout<<" queue is empty"<<endl;

     }
         else{
            cout<<" queue ios not empty" <<endl;
         }
}

