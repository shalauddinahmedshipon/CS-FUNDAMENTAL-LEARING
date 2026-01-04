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

void reverse_ls(Node*){

}

int main(){

    Node* head1 =NULL;
    Node* tail1 =NULL;
    Node* head2 =NULL;
    Node* tail2 =NULL;
    
    int val;

    while (true)
    {
       cin>>val;
       if(val==-1){
        break;
       }
       insert_at_tail(head1,tail1,val);
       insert_at_head(head2,tail2,val);
    }

    // print_forward(head1);
    // print_forward(head2);
    bool isPalindrome=true;
    Node* tmp=head2;
    for (Node* i = head1; i!=NULL; i=i->next)
    {
       if(i->val!=tmp->val){
        isPalindrome=false;
        break;
       }
       tmp=tmp->next; 
    }
    
    if(isPalindrome){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }


    return 0;
}






