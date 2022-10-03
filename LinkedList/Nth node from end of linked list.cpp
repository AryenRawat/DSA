Node *reverse(Node*head){
    if(head==nullptr){
        return head;
    }
    Node*curr=head,*prev=nullptr;
    while(curr!=nullptr){
        Node *temp=curr->next;
        curr->next=prev;
        prev=curr;
        curr=temp;
    }
    return prev;
}

//Function to find the data of nth node from the end of a linked list.
int getNthFromLast(Node *head, int n)
{
       // Your code here
       Node *ptr = reverse(head);
       while(n>1 && ptr){
           ptr=ptr->next;
           n--;
       }
       return !ptr?-1:ptr->data;
       
}
