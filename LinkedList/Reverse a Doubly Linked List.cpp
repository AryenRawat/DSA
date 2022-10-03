Node* reverseDLL(Node * head)
{
    //Your code here
    if(head==nullptr){
        return head;
    }
    Node*curr=head,*prev=nullptr;
    while(curr!=nullptr){
        Node*next =curr->next;
        curr->next=prev;
        curr->prev=next;
        prev=curr;
        curr=next;
    }
    return prev;
}
