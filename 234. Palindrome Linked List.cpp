class Solution {
public:
    bool isPalindrome(ListNode* head) {
        int n=0;
        ListNode* x=head, *y=head, *z=head;
        while(x!=NULL){
            n++;
            x=x->next;
        }
        int a=n/2;
        ListNode* prev=NULL, *next=NULL, *curr=z;
        while(a!=0){
            curr=curr->next;
            a--;
        }
        while(curr!=NULL){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        z=prev;
        int k=n/2;
        while(k!=0){
            if(y->val!=z->val)
                return false;
            y=y->next;
            z=z->next;
            k--;
        }
        return true;
    }
};
