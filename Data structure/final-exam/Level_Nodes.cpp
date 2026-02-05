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



void  levelPrint(Node* root,int level){
    int maxL=0;
    queue<pair<Node*,int>> q;
    if(root) q.push({root,0});
 

  while (!q.empty())
  {
   Node* p= q.front().first;
   int currentLevel=q.front().second;
   q.pop();

   if(level==currentLevel) cout<<p->val<<" ";
   maxL=max(currentLevel,maxL);
  
   if(p->left) q.push({p->left,currentLevel+1});
   if(p->right) q.push({p->right,currentLevel+1});


  }

  if(level>maxL) cout<<"Invalid"<<endl;
  

};


int main(){

   Node* root= tree_input();
   int level;
   cin>>level;

   levelPrint(root,level);
   

    return 0;
}