#include<bits/stdc++.h>;
using namespace std;

int sz=0;
class Node{
    public:
    int val;
    Node* next;
    Node(int val){
     this->val=val;
     this->next=NULL;
    }
};

void insert_at_tail(Node* &head,Node* &tail,int val){
  sz++;
  Node* newNode = new Node(val);
  if(head==NULL){
    head=newNode;
    tail=newNode;
    return;
  };
  tail->next=newNode;
  tail=newNode;
}


void insert_at_head(Node* &head,Node* &tail,int val){
sz++;
Node* newNode = new Node(val);
if(head==NULL){
    head=newNode;
    tail=newNode;
    return;
  };
newNode->next=head;
head=newNode;
}

void delete_any_pos(Node* &head,Node* &tail,int idx){
    Node* tmp = head;
    if(idx==0){
    Node* delete_node=tmp;
    head=head->next;
    delete delete_node;
    sz--;
    return;
    }
    if(idx>=sz){
        return;
    }
    for (int i = 0; i < idx-1; i++)
    {
        if(tmp->next==NULL){
        tail=tmp;
        return;
        }
        tmp=tmp->next;
        
    }
   if(tmp->next==NULL){
        return;
   }

    Node* delete_node=tmp->next;
    tmp->next=tmp->next->next;
    delete delete_node;
    sz--;
    if(tmp->next==NULL){
     tail=tmp;
    }
}

void print_link_list(Node* &head){
    Node* tmp = head;
    while (tmp!=NULL)
    {
       cout<<tmp->val<<" ";
       tmp=tmp->next;
    };
    
}

int main(){
    Node* head=NULL;
    Node* tail=NULL;
    int q;
    cin>>q;
   for (int i = 0; i <q; i++)
   {
   long long int x,v;
   cin>>x>>v;

   if(x==0){
    insert_at_head(head,tail,v);
    print_link_list(head);
   }
   if(x==1){
    insert_at_tail(head,tail,v);
    print_link_list(head);
   }
   if(x==2){
    delete_any_pos(head,tail,v);
    print_link_list(head);
   }

   cout<<endl;
   }
   
    return 0;
}