#include<iostream>
using namespace std;
class node{

   public:
   int data;
   node* next;
   node* prev;

   //constructor:
   node(int d){

    this->data=d;
    this->next=NULL;
     }
     
     //destructor:
     ~node(){
        int value=this->data;
        if(this->next==NULL){
            delete next;
            next =NULL;
        }
        cout<<"memory is free for node with data"<<value<<endl;

     }
};

node* reverse(node* head){

    if(head==NULL || head->next==NULL){
        return head;
    }
        node* head1=reverse(head->next);
        head->next->next=NULL;
        head->next=NULL;
        return head1;
}
void insertatnode(node* &tail,int element,int d){
        
        if(tail==NULL){
            node* newnode=new node(d);
            tail=newnode;
            newnode->next=newnode;
        }
           
           else{

            node* current=tail;
             while(current->data !=element){
                  current=current->next;
             }

             node* temp =new node(d);
             temp->next=current->next;
             current->next=temp;
           }
}
 
 void deletenode(node* &tail,int value){
            if(tail==NULL){
                cout<<"empty linked list; ";
               return;
               }
               

               else{
                     node* previous=tail;
                     node* current=previous->next;

                     while(current->data!=value){
                        previous=current;
                        current=current->next;
                     }
                     previous->next=current -> next;
                     //for 1 node:
                     if(current ==previous){
                tail==NULL;
               }
                      //for >2  nodes:
                     if(tail==current){
                        tail=previous;
                     }
                     current->next=NULL;
                     delete current;

               }
 }

void print(node* tail){
   node* temp=tail;
   do{
    cout<<tail->data<<" ";
    tail=tail->next;
   }while(tail !=temp);
   cout<<endl;


}
int main(){
    node* tail=NULL;

    insertatnode(tail,3,5);
    print (tail);
     insertatnode(tail,5,7);
     print(tail);
     
insertatnode(tail,7,8);
     print(tail);

     insertatnode(tail,8,3);
     print(tail);

    insertatnode(tail,7,6);
    print(tail);

    deletenode(tail,5);
    print(tail);

}

