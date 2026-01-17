#include <bits/stdc++.h>

using namespace std;

class Node{
    public:
    int val;
    Node* next;
    Node* prev;
    Node(int val){
     this->val=val;
     this->next=NULL;
     this->prev=NULL;
    }
};


class myStack{
   public:
   Node* head1=NULL; 
   Node* tail1=NULL;
   int size1=0;

   void push(int val){
    size1++;
   Node* newnode=new Node(val);
   if(head1==NULL){
    head1=newnode;
    tail1=newnode;
    
    return;
   }
   tail1->next=newnode;
   newnode->prev=tail1;
   tail1=newnode;
  
   }

   void pop(){
   Node* deletenode=tail1;
   if(tail1==NULL){
    head1=NULL;
    return;
   }
   tail1=tail1->prev;
   delete deletenode;
   size1--;
   }

   int top(){
   return tail1->val;
   }

   bool empty(){
    return size1==0;
   }

};




class myQueue{
public:
   Node* head2=NULL; 
   Node* tail2=NULL;

   void push(int val){
   Node* newnode=new Node(val);
   if(head2==NULL){
    head2=newnode;
    tail2=newnode;
    return;
   }
   tail2->next=newnode;
   newnode->prev=tail2;
   tail2=newnode;
   }

   void pop(){
    Node* deletenode=head2;
    if(head2==NULL){
        tail2=NULL;
        return;
    }
    head2=head2->next;
    delete deletenode;
   }

   int front(){
    return head2->val;   
   }
};


int main()
{
    int n,m;
    cin>>n>>m;
    int val1,val2; 
    myStack a;
    myQueue b;
    bool isSame= true;
    if(n==m){
       for(int i=0;i<n;i++){
          cin>>val1;
        a.push(val1);
       }    
        
       for(int i=0;i<m;i++){
        cin>>val2;
        b.push(val2);
       }   
        
        while(!a.empty()){

            if(a.top() != b.front()){
                isSame=false;
                break;
            }

            a.pop();
            b.pop();
        }
        
    }else{
        isSame=false;
    }
   
    isSame? cout<<"YES"<<endl : cout<<"NO"<<endl;
    
    return 0;
}
