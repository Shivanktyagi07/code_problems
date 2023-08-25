#include<iostream>
#include<queue>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;
      
      //constructor:
      node(int d){
        this -> data = d;
        this ->left = NULL;
        this ->right = NULL; 

      }
};

node* buildtree(node* root){
cout<<" enter the data : "<<endl;;
       int data; 
       cin>> data;
            root=new node(data);

           if(data == -1)
           return NULL;
           cout<<" enter the data for left of "<<data<<endl;
           root -> left=buildtree(root -> left);
           cout<<" enter the data for right of "<< data << endl;
           root -> right = buildtree(root -> right);
           return root;

}  

// LEVEL ORDER TRAVERSAL OF TREE:

void levelorder(node* root){
  queue<node*> q;
    
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
      node* temp=q.front();
      q.pop();

      //separator:
      if(temp == NULL){
        cout<<endl;
        if(!q.empty()){
          q.push(NULL);
          
        }
      }
      else{
        cout<<temp->data<<" ";
        if(temp->left){
          q.push(temp->left);
        }
        if(temp->right){
          q.push(temp->right);
        }

        
      }

    }
}

void inorder(node* root){
  if(root == NULL){
    return ;
  }
  inorder(root->left);
  cout<< root->data<<" ";
  inorder(root->right);
}


void preorder(node* root){
  if(root == NULL){
    return ;
  } 
  cout<<root->data<<" ";
  preorder(root->left);
  preorder(root->right);
}

void postorder(node* root){
  if(root == NULL)
  return ;

  postorder(root->left);
  postorder(root->right);
  cout<<root->data<<" ";
}



int main(){

// 1 2 3 -1  -1 -1  4 5 -1 -1 -1
    node* root = NULL;
    root =buildtree(root);
    cout<<"printing tree  BY LEVEL ORDER TRAVERSAL :"<<endl;
    levelorder(root);

    cout<<"IN ORDER TRAVERSAL"<<endl;
    inorder(root);

     cout<<endl<<"PRE ORDER TRAVERSAL"<<endl;
    preorder(root);

     cout<<endl<<"POST ORDER TRAVERSAL"<<endl;
    postorder(root);

    return 0;
}



