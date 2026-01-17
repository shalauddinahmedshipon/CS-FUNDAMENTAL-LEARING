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

int sz=0;

void insert_head(Node* &head,Node* &tail,int val){
sz++;
Node* newnode=new Node(val);
if(head==NULL){
   head=newnode;
   tail=newnode;
   return;
}
newnode->next=head;
head->prev=newnode;
head=newnode;

};

void insert_tail(Node* &tail,int val){
Node* newnode=new Node(val);
Node* tmp=tail;
tmp->next=newnode;
newnode->prev=tmp;
tail=newnode;
sz++;
};

void insert_any_pos(Node* &head,int idx,int val){
Node* newnode=new Node(val);
Node* tmp=head;
for(int i=0;i<idx-1;i++){
   tmp=tmp->next;
}
newnode->next=tmp->next;
tmp->next->prev=newnode;
tmp->next=newnode;
newnode->prev=tmp;
sz++;
}

void print_ls(Node* &head){
Node* tmp=head;
while(tmp!=NULL){
cout<<tmp->val<<" ";
tmp=tmp->next;
}

}

void print_reverse_ls(Node* &tail){
Node* tmp=tail;
while(tmp!=NULL){
cout<<tmp->val<<" ";
tmp=tmp->prev;
}
}





int main()
{
    Node* head=NULL;
    Node* tail=NULL;
    int q;
    cin>>q;

    while(q--){
    int x,v;
    cin>>x>>v;
   //   cout<<"size"<<sz<<endl;
      if(x<0 || x>sz){
       cout<<"Invalid"<<endl;
       }
      else if(x==0){
       insert_head(head,tail,v);

       cout<<"L ->"<<" "; 
       print_ls(head);
       cout<<endl;
       cout<<"R ->"<<" "; print_reverse_ls(tail);
       cout<<endl;
      }
      else if(x==sz){
         insert_tail(tail,v);
         cout<<"L ->"<<" "; 
         print_ls(head);
         cout<<endl;
         cout<<"R ->"<<" "; print_reverse_ls(tail);
         cout<<endl;
      }
      else{
         insert_any_pos(head,x,v);
          cout<<"L ->"<<" "; 
       print_ls(head);
       cout<<endl;
       cout<<"R ->"<<" "; print_reverse_ls(tail);
       cout<<endl;
      }


      


    }
   
    return 0;
}
