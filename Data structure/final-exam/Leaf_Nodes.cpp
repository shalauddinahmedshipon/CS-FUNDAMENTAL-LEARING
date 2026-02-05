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

void print_leaf_desc(Node* root){


    queue<Node*> q;
    if(root) q.push(root);
    vector<int> v;

  while (!q.empty())
  {
   Node* p= q.front();
   q.pop();

   if(p->left==NULL && p->right==NULL) v.push_back(p->val);
 
  
   if(p->left) q.push(p->left);
   if(p->right) q.push(p->right);

  }

  sort(v.begin(),v.end(),greater<int>());
  for (int i = 0; i < v.size(); i++)
  {
    cout<<v[i]<<" ";
  }
  

};


int main(){
   Node* root= tree_input();
   print_leaf_desc(root);

    return 0;
}