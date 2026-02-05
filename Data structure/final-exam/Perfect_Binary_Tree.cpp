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



bool isPerfect(Node* root){
    queue<pair<Node*,int>> q;
    int totalNode=0;
    int maxL=0;
    if(root) q.push({root,1});
 

  while (!q.empty())
  {
   Node* p= q.front().first;
   int level=q.front().second;
   q.pop();

   int maxLevel= max(maxL,level);
   maxL=maxLevel;
   totalNode++;
  
   if(p->left) q.push({p->left,level+1});
   if(p->right) q.push({p->right,level+1});


  }

   return (totalNode == (pow(2,maxL)-1));
  

};


int main(){
   Node* root= tree_input();
   bool res=isPerfect(root);
   if(res){
    cout<<"YES"<<endl;
   }else{
    cout<<"NO"<<endl;
   }

    return 0;
}