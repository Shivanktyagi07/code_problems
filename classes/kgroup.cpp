#include<iostream>
using namespace std;
class node{
        public:
        int data;
        node* next;

        public:
        node(int d)
          {
            this->data=d;
            this->next=NULL;
          }
};
void insertathead(node* &tail , node* &head, int d){
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

       void print(node* head){
         node* temp=head;

         while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
           
         }
}
node* reverse(node* head){
     if(head==NULL){
      return head;
     }
     node* curr=head;
     node* prev=NULL;
     node* forward=NULL;

     while(curr!=NULL){
      forward=curr->next;
      curr->next=prev;
      prev=curr;
      curr=forward;
     }
     return prev;
}

node* reverseinkgroup(node* &head,int k){

    if(head==NULL){
        return head;

    }

    node* curr=head;
    node* prev=NULL;
    node* forward=NULL;
    int cnt=0;

    while(curr!=NULL && cnt<k){
         
           forward=curr->next;
           curr->next=prev;
           prev=curr;
           curr=forward;
           cnt++;
    }
    if(forward!=NULL){
        head->next = reverseinkgroup(forward,k);
    }
     return prev;
}

int main(){
    node* newnode=new node(11);
    node* head=newnode;
    node* tail=newnode;
     insertathead(tail,head,12);
     insertathead(tail,head,13);
     insertathead(tail,head,14);
     insertathead(tail,head,15);
     insertathead(tail,head,16);
     /*cout<<"before reverse linked list is="<<endl;
    print(head);
    cout<<endl<<"reverse linked list in k group:"<<endl;
     head=reverseinkgroup(head,2);
     print(head);

     head=reverse(head);
     cout<<endl<<"aftre reverse linked list is="<<endl;
     print(head);*/

   

}