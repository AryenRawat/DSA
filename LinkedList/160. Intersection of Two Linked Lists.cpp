/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    
    int len(ListNode *head){
        int count=0;
        if(!head) return count;
        else{
            while(head){
                head=head->next;
                count++;
            }
            return count;
        }
    }
    
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int l1=len(headA);
        int l2=len(headB);
        int d;
        ListNode *ptr1,*ptr2;
        if(l1>l2){
            d=l1-l2;
            ptr1=headA;
            ptr2=headB;
        }else{
            d=l2-l1;
            ptr2=headA;
            ptr1=headB;
        }
        while(d-- && ptr1->next!=nullptr){
            ptr1=ptr1->next;
        }
        while(ptr1!=nullptr && ptr2!=nullptr){
            if(ptr1==ptr2){
                return ptr1;
            }
            ptr1=ptr1->next;
            ptr2=ptr2->next;
        }
        return 0;
        
        
    }
};
