class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *ptr = head;
        if(head==nullptr){
            return head;
        }
        ListNode*curr=head,*prev=nullptr;
        while(curr!=nullptr){
            ListNode*temp = curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }return prev;
    }
};
