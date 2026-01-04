#include<bits/stdc++.h>
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

int size_of_list(Node* head){
    Node* tmp = head;
    int size=0;
    while(tmp!=NULL){
      tmp = tmp->next;
      size++;
    }
    return size;
}

void insert_at_tail(Node* &head,Node* &tail,int val){
    Node* newNode = new Node(val);
    if(head==NULL){
    head=newNode;
    tail=newNode;
    return;
    }
    tail->next=newNode;
    newNode->prev=tail;
    newNode->next=NULL;
    tail=newNode;
}

void insert_at_head(Node* &head,Node* &tail,int val){
    Node* newNode = new Node(val);
    if(head==NULL){
    head=newNode;
    tail=newNode;
    return;
    }
    head->prev=newNode;
    newNode->prev=NULL;
    newNode->next=head;
    head=newNode;
}

void print_forward(Node* head){
    Node* tmp = head;
    while (tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}

void print_backward(Node* tail){
    Node* tmp = tail;
    while (tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->prev;
    }
    cout<<endl; 
}

void sort_ll(Node* head){
    for (Node* i = head; i->next!=NULL; i=i->next)
    {
     for (Node* j = i->next; j!=NULL;j=j->next)
     {
       if(i->val>j->val){
        swap(i->val,j->val);
       }
     }
     
    }
    
}
int main(){

    Node* head =NULL;
    Node* tail =NULL;
   
    
    int val;

    while (true)
    {
       cin>>val;
       if(val==-1){
        break;
       }
       insert_at_tail(head,tail,val);
      
    }
      sort_ll(head);
     print_forward(head);

  


    return 0;
}






