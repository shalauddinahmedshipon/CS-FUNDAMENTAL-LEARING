class Solution {

void reverse(ListNode* &head,ListNode* &tail,ListNode* tmp){
    if(tmp->next==NULL){
        head=tmp;
        return;
    }
    reverse(head,tail,tmp->next);
    tmp->next->next=tmp;
    tmp->next=NULL;
    tail=tmp;
}

public:
    ListNode* reverseList(ListNode* head) {
       ListNode* tail= head;
       if(head==NULL){
        return head;
       }
       while(tail->next != NULL){
            tail=tail->next;
       } 

       reverse(head,tail,head);

       return head;
    }
};