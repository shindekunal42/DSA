class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        if(head==NULL){
        cout<<"Linked list is empty: "<<endl;
        return head;
    }
    if(head->next==NULL){
        //only one present in L.L
        return head;
    }
    ListNode* slow=head;
    ListNode* fast=head;
    while( fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
    }
};
  