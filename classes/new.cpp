#include<iostream>
using namespace std;
class node{
    public:
     int data;
     node* next;

     node(int data){
          this ->data=data;
          this ->next=NULL;
     }
};

void insertathead(node* &tail,node* &head,int d){
     if(head==NULL){
          node* temp=new node(d);
          head=temp;
          tail=temp;

     }

     else{
          node* temp=new node(d);
          temp->next=head;
          head=temp;

     }
}
     node* duplicate(node* head){
     if(head==NULL)
     return NULL;

     node* curr=head;

     if(curr->data==curr->next->data && curr->next==NULL){

          node* notetodelete=curr->next;
          delete(notetodelete);
          curr->next=curr->next->next;

     }

     else{
          curr=curr->next;
     }
          return head;
     }
      
      // REMOVE DUPLICATES FROM UNSORETD LL:
     node* unsoretd(node* head){
          node* curr=head;

          while(curr!=NULL){
                node* temp=curr->next;

                while(temp!=NULL){
                    if(curr->data==temp->data){
                         node* nodetodelete=temp;
                         delete(nodetodelete);
                    }

                }
          }
             return head;
     }

     void print(node* head){
          
          
          node* temp=head;
          while(temp!=NULL){
               cout<<temp->data<<" ";
               temp-temp->next;
          }
          cout<<endl;
     }


int main(){
     node* newnode=new node(12);
     node* head=newnode;
     node* tail= newnode;
      insertathead(tail,head,13);
      print(head);
     



}