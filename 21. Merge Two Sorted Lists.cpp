class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        //Base case if list1==NULL return list2 && if list2==NULL return list1;
        if(list1==NULL || list2==NULL){
            return list1==NULL ? list2:list1;
      }
        //case1 list1 value less than list2 then insert list1 and merge it and return list1.
        if(list1->val <= list2->val){
            list1->next=mergeTwoLists(list1->next,list2);
            return list1;
        }
        else{//case2 ->else do in reverse case for list2.
       list2->next=mergeTwoLists(list1,list2->next);
            return list2;
        }
    }
};