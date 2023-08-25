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
    cout<<endl;
}

node* getmid(node* head){
    node* slow=head;
    node* fast=head->next;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}

node* merge(node* left,node* right){
    if(left==NULL)
    return right;

    if(right=NULL)
    return left;

    node* ans=new node(-1);
    node* temp=ans;

    while(left!=NULL && right!=NULL){
        if(left->data < right->data){
            temp->next=left;
            temp=left;
            left=left->next;
        }

        else{
            temp->next=right;
            temp=right;
            right=right->next;

        }
    }
    while(left!=NULL){
         temp->next=left;
            temp=left;
            left=left->next;

    }

    while(right!=NULL){
        temp->next=right;
            temp=right;
            right=right->next;

    }
    ans=ans->next;
    return ans;
}
node* mergesort(node* head){
           
           if(head==NULL || head->next==NULL)
           return head;

           node* mid=getmid(head);

           node* left=head;
           node* right=mid->next;
           mid->next=NULL;

           left=mergesort(left);
           right=mergesort(right);

           node* result=merge(left,right);

           return result;


}


int main(){
    node* newnode=new node(11);
    node* head=newnode;
    node* tail=newnode;
     insertathead(tail,head,12);
     insertathead(tail,head,10);
     insertathead(tail,head,5);
     insertathead(tail,head,1);
     insertathead(tail,head,16);
     cout<<"BEFORE MERGE SORT:"<<endl;
     print(head);
          cout<<"AFTER MERGE SORT :"<<endl;
     mergesort(head);
      print(head);
    
}

