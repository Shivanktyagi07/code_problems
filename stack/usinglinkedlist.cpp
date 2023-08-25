#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    
    node(int data){
        this ->data=data;
        this->next=NULL;
    }

};

class stack{
    
    node* head;
    int qsize;

    public: 

    stack(){
    head=NULL;
    qsize=0;
    }

    void push(int d){
        node* temp= new node(d);
         ++qsize;
        
        if(head==NULL){
            temp=head;
        }
        
        else{
            temp->next=head;
            head=temp;
        }
        
    }

    void pop(){
        if( head = NULL){
        return ;
        }
        --qsize;
        
            node* temp=head;
            head=head->next;
            head->next=NULL;
            delete(temp);
        
    }

    int getTop(){
        if( head == NULL){
        return -1;
        }
        else{
            return head->data;
        }
    }

        int size(){
            return qsize;
        }
};
int main(){

    stack s;
    s.push(11);
    s.push(12);
     cout<<s.getTop();
}

