#include<iostream>
using namespace std;
class node{
     
     public:
    int data;
    node* next;
    node* previous;

    node(int d){

        this->data=d;
        this ->next=NULL;
        this ->previous=NULL;
    }

    ~ node(){
        int val = this->data;
        if( next!= NULL){
            delete next;
            next = NULL;
        }
        cout<<"memory is free for the data "<<val<<endl;
    }
};
void insertathead(node* &tail ,node* &head,int d){
     if(head==NULL){
        node* temp=new node(d);
        head=temp;
        tail=temp;
     }
     else{
    node* temp=new node(d);
    temp->next=head;
    head->previous=temp;
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

    tail->next=temp;
    temp->previous=tail;
    tail=temp;
    }
}

//insert element at specific position::
void insert(node* &tail, node* &head,int position,int d){
//at start:
if(position==1){
    insertathead(tail,head,d);
    return;
}
    node* temp=head;
    int cnt=1;

    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }
         //inserta at last :
         if(temp->next==NULL){
            insertattail(head,tail,d);
         return;
         }
          
          node* nodetoinsert=new node(d);
          nodetoinsert->next=temp->next;
          temp->next->previous =nodetoinsert;
          temp->next=nodetoinsert;
          nodetoinsert->previous=temp;


}
 
 void nodetodelete(node* &head, int position){
if(position == 1){
    node* temp = head;
    temp -> next -> previous = NULL;
    head = temp -> next;
    temp->next = NULL;
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

                      curr->previous = NULL;
                      prev->next = curr ->next;
                      curr->next = NULL ;
                      delete curr;
                   }

 }

void print(node* head){
    
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp= temp->next;
    }
   
    cout<<endl;
}
//find the lenght::
int getlength(node* head){

    int length=0;
    node* temp=head;
    while(temp!=NULL){
        length++;
        temp=temp->next;
    }
    return length;
}


int main(){
    
     node* node1=new node(10);
     node* head=node1;
     node* tail=node1;
     print(head);

      cout<<"head is="<<head->data<<endl;
    cout<<"tail is="<<tail->data<<endl;

     insertathead(tail,head,12);
     print(head);

      cout<<"head is="<<head->data<<endl;
    cout<<"tail is="<<tail->data<<endl;

insertathead(tail,head,13);
print(head);

 cout<<"head is="<<head->data<<endl;
    cout<<"tail is="<<tail->data<<endl;

insertattail(head,tail,38);
print(head);
 cout<<"head is="<<head->data<<endl;
    cout<<"tail is="<<tail->data<<endl;

insert(tail,head ,2,50);
print(head); 

 cout<<"head is="<<head->data<<endl;
    cout<<"tail is="<<tail->data<<endl;

  insert(tail,head ,6,60);
print(head);   

cout<<"head is="<<head->data<<endl;
    cout<<"tail is="<<tail->data<<endl;
    
cout<<"length is="<<getlength(head)<<endl;
print(head);
cout<<endl;
nodetodelete(head , 6);
cout<<endl;
print(head);

cout<<"head is="<<head->data<<endl;
    cout<<"tail is="<<tail->data<<endl;
    
cout<<"length is="<<getlength(head)<<endl;


}

 
