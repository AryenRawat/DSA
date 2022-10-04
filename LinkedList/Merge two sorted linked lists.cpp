//Function to merge two sorted linked list.
Node* sortedMerge(Node* head1, Node* head2)  
{  
    // code here
    Node*p1=head1,*p2=head2;
    Node*temp=new Node(-1);
    Node*p3=temp;
    
    while(p1!=nullptr && p2!=nullptr){
        if(p1->data > p2->data){
            p3->next=p2;
            p2=p2->next;
        }else{
            p3->next=p1;
            p1=p1->next;
        }
        p3=p3->next;
    }
    
    while(p1!=nullptr){
        p3->next=p1;
        p1=p1->next;
        p3=p3->next;
    }
    
    while(p2!=nullptr){
        p3->next=p2;
        p2=p2->next;
        p3=p3->next;
    }
    return temp->next;
    
} 


// or 

ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==nullptr) return list2;
        if(list2==nullptr) return list1;
        
        ListNode*res;
        
        if(list1->val < list2->val){
            res=list1;
            res->next=mergeTwoLists(list1->next,list2);
        }else{
            res=list2;
            res->next=mergeTwoLists(list1,list2->next);
        }
        return res;
    }







