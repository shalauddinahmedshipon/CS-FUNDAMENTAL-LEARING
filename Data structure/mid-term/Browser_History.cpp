#include <bits/stdc++.h>

using namespace std;

class Node{
    public:
    string val;
    Node* next;
    Node* prev;
    Node(string val){
     this->val=val;
     this->next=NULL;
     this->prev=NULL;
    }
};

int sz=0;

void insert_head(Node* &head,Node* &tail,string val){
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

void insert_tail(Node* &head,Node* &tail,string val){
Node* newnode=new Node(val);
Node* tmp=tail;
if(head==NULL){
   head=newnode;
   tail=newnode;
   return;
}
tmp->next=newnode;
newnode->prev=tmp;
tail=newnode;
sz++;
};

void insert_any_pos(Node* &head,int idx,string val){
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


int main(){
    Node* head=NULL;
    Node* tail=NULL;
    string line;
    getline(cin,line);
    stringstream ss(line);
    string word;

    while (ss >> word)
    {   
        
       if(word != "end" ){
        insert_tail(head,tail,word);
       }
      
    }

    int q;
    cin>>q;

    string com;
    cin.ignore();

    Node* tmp=head;
    while (q--)
    {     
      getline(cin,com);
      stringstream ss(com);
      string word;
      vector<string> v;
      string siteName;
      while (ss>>word)
      {
        v.push_back(word);
      }

      if(v.size()==2){
        siteName=v[1];
      }

      com=v[0];
      
      
     
     if(com=="visit"){
      bool isMatch=false;
      Node* tmp2=head;
      while (tmp2!=NULL)
      {
         if(tmp2->val==siteName){
            isMatch=true;
            break;
         }
         tmp2=tmp2->next;
      }
      if(isMatch){
         tmp=tmp2;
         cout<<tmp->val<<endl;
      }else{
        cout<<"Not Available"<<endl;
      }
       
     }
    
     else if(com=="next"){
        if(tmp->next!=NULL){
        tmp=tmp->next;
        cout<<tmp->val<<endl;
        }
        else{
        cout<<"Not Available"<<endl;
       }  
     }


     else if(com=="prev"){
      if(tmp->prev!=NULL) {
        tmp=tmp->prev;
        cout<<tmp->val<<endl;
      }
      else{
        cout<<"Not Available"<<endl;
      }
     }

    
     
    }
    

   
    
    
    return 0;
}