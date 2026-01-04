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
    tail=newNode;
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

int main(){

    Node* head1 =NULL;
    Node* head2 =NULL;
    Node* tail1 =NULL;
    Node* tail2 =NULL;
    int val1,val2;

    while (true)
    {
       cin>>val1;
       if(val1==-1){
        break;
       }
       insert_at_tail(head1,tail1,val1);
    }

   
    while (true)
    {
       cin>>val2;
       if(val2==-1){
        break;
       }
       insert_at_tail(head2,tail2,val2);
    }


 if(size_of_list(head1)!=size_of_list(head2)){
    cout<<"NO"<<endl;
    return 0;
 }

bool isEqual=true;
Node* tmp= head2;
for (Node* i = head1;i!=NULL; i=i->next)
{
    if(i->val!=tmp->val){
        isEqual=false;
        break;
    }

    tmp=tmp->next;           
}

if(isEqual){
    cout<<"YES"<<endl;
}else{
    cout<<"NO"<<endl;
}

    return 0;
}