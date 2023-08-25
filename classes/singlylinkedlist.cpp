#include<iostream>
using namespace std;
class node{

    public:
    int data;
    node* next;

    node(int data){
       this->data=data;
       this->next=NULL;
    }

    ~node(){
      int value=this->data;
             if(this->next!=NULL){
                   delete next;
                   this->next=NULL;
             }
             cout<<"memeory is free for the data value "<<value<<endl;
    }
};
      
    void insertathead(node* &tail,node* &head, int d){
          if(head==NULL){
          node* temp=new node(d);
          head=temp;
          tail=temp;
          }
          else{
          node* temp=new node(d);
          temp -> next=head;
          head=temp;
          }
          
    }  
    void insertattail(node* &head,node* &tail,int d){
     if(tail==NULL){
      node* temp=new node(d);
      tail=temp;
      head=temp;
                   }
                   else{
             node* temp=new node(d);
             tail->next =temp;
             tail=tail->next;
                   }
      
    }
     void insertatposition(node* &tail,node* &head,int position,int d){
          
          node* temp=head;
          int cnt=1;
          if(position==1){
            insertathead(tail,head,d);
            return;
          }
          if(temp->next==NULL){
            insertattail(tail,head,d);
            return;
          }

          while(cnt<position-1){
            temp=temp->next;
            cnt++;

          }

          node* nodetoinsert=new node(d);

          nodetoinsert->next=temp->next;
          temp->next=nodetoinsert;

     }

      void deletenode(node* &head, int position){
             if(position==1){
                   node* temp=head;
                   head=head->next;
                   temp->next=NULL;
                   delete temp;
             }
             else  {
                        node* curr=head;
                        node* prev=NULL;
                        int cnt=1;
                        while(cnt<position){
                          prev=curr;
                          curr=curr->next;
                          
                          cnt++;

                        }

                        prev->next=curr->next;
                        curr->next=NULL;
                        delete curr;
                   }
                   
      }

     int getlength(node* head){
          int length=0; 
      node* temp=head;
      

        while(temp !=NULL){
            length++;
            temp=temp->next;
        }
           return length;
     }
   
   void print(node* &head){
        node* temp=head;

        while(temp !=NULL){
            cout<<temp ->data<<" ";
            temp=temp-> next;
        }
           cout<<endl; 
   }
 
      node* reverse(node *head){
          node* temp=head;
    if(temp==NULL || temp->next==NULL){
        return head;
    }
        node* current=temp;
        node* prev= NULL;
        node* forward=NULL;

        while(current!=NULL){

          forward=current->next;
          current->next=prev;
          prev=current;
          current=forward;
        }
        return prev;
}
node* middle(node* head){


int length=getlength(head);
cout<<"length is ="<<length;
int mid=(length/2);
node* temp=head;
int cnt=0;
while(cnt<mid){
  temp=temp->next;
  cnt++;
}
cout<<endl<<"middle node is="<<temp->data;

}
node* getmid(node* head){
    node* slow=head;
    node* fast=head->next;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    cout<<slow->data;
}
int main(){ 
   
    node* node1=new node(10);
   node* head=node1;
    node* tail=node1;
print(head);


insertathead(tail,head,12);


insertathead(tail,head,33);
 
   insertattail(head,tail,12);
  
insertattail(head,tail,55);

print(head);
cout<<endl;
insertatposition(tail,head,4,6);
print(head);
cout<< "head is = "<<head->data<<endl;
cout<< "tail is = "<<tail->data<<endl;

// deletenode(head,1);
// print(head);
// deletenode(head,4);
// print(head);

// /*cout<<"before deletion"<<endl;
// cout<<" middle node is = "<<endl;
// middle(head);
// print(head);
// cout<<endl;
// head=reverse(head);
// print (head);*/
// /*
// deletenode(head,3);
// print(head);
// cout<<"after deletion="<<endl;
// middle(head);*/









}


