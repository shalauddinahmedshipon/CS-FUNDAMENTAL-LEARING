#include<bits/stdc++.h>;
using namespace std;

class Node{
    public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
     this->val=val;
     this->left=NULL;
     this->right=NULL;
    }
};


Node* tree_input(){
  int val;
  cin>>val;
  Node* root;
  if(val==-1) root=NULL;
  else root = new Node(val);
  queue<Node*> q;
  if(root) q.push(root);
  while (!q.empty())
  {
   Node* p= q.front();
   q.pop();

   int l,r;
   cin>>l>>r;
   Node*left,*right;
   if(l==-1) left=NULL;
   else left= new Node(l);
   if(r==-1) right=NULL;
   else right=new Node(r);

   p->left=left;
   p->right=right;

   if(left) q.push(left);
   if(right) q.push(right);

  }
  
  return root;
}




void outer_left(Node* root){
if(root==NULL){
 return; 
    }
if(root->left) outer_left(root->left);
else outer_left(root->right);

cout<<root->val<<" ";
}

void outer_right(Node* root){
if(root==NULL){
 return; 
    } 
cout<<root->val<<" ";
if(root->right) outer_right(root->right);
else outer_right(root->left);


}

void print_outer_tree(Node* root){
    if(root==NULL) return;
    if(root->left){
     outer_left(root->left);
    }
   
    cout<<root->val<<" ";

    if(root->right){
       outer_right(root->right);
    }
    

   
    

}


int main(){

   Node* root= tree_input();


   print_outer_tree(root);


    return 0;
}