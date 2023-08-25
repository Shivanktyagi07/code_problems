#include<iostream>
using namespace std;
class node{
      public:
      int data;
      node* next;

  node(int d){

    this->data=d;
    this->next=NULL;
  }

};

void print(node* &head){
        node* temp=head;

        while(temp !=NULL){
            cout<<temp ->data<<" ";
            temp=temp-> next;
        }
           cout<<endl; 
   }
node* reverse(node* head){

    if(head==NULL || head->next==NULL){
        return head;
    }
        node* head1=reverse(head->next);
        head->next->next=NULL;
        head->next=NULL;
        return head1;
}




int main(){

   node* head=NULL;
     cout<<"before reverse ";
     print (head);
     cout<<endl<<"after reverse"<<endl;
     reverse(head);
     print(head);

} 