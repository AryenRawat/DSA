class Solution
{
    public:
    //Function to remove a loop in the linked list.
    void removeLoop(Node* head)
    {
        // code here
        // just remove the loop without losing any nodes
     if(head==nullptr){
         return;
     }
     Node*fast=head,*slow=head;
     while(fast!=nullptr && fast->next!=nullptr){
         slow=slow->next;
         fast=fast->next->next;
         if(slow==fast) break;
     }
     if(fast==head && slow==head){
         while(slow->next!=head){
             slow=slow->next;
         }
         slow->next=nullptr;
         return;
     }
     if(fast==slow){
         fast=head;
         while(slow->next!=fast->next){
             slow=slow->next;
             fast=fast->next;
         }
         slow->next=nullptr;
     }
  }
};
