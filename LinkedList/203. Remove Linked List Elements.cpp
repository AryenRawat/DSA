class Solution {
public:
    ListNode* removeElements(ListNode* head, int val){
        if(head==nullptr){
            return head;
        }
        while(head!=nullptr && head->val==val){
            head=head->next;
        }
        ListNode*p=head;
        while(p!=nullptr && p->next!=nullptr){
            if(p->next->val==val){
                p->next=p->next->next;
            }else{
                p=p->next;
            }
            //p=p->next;
        }
       // head=p;
        return head;       
    }
};
