class Solution{
public:
    ListNode *moveToFront(ListNode *head){
        if(head==nullptr || head->next==nullptr){
            return head;
        }
        ListNode*p=head;
        ListNode*q=head->next;
        while(q->next!=nullptr){
            q=q->next;
            p=p->next;
        }
        q->next=head;
        p->next=nullptr;
        head=q;
        return q;
    }
};
