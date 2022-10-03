class Solution{
    public:
    int len(Node*head){
        int c=0;
        while(head!=nullptr){
            c++;
            head=head->next;
        }
        return c;
    }
    /* Should return data of middle node. If linked list is empty, then  -1*/
    int getMiddle(Node *head)
    {
        // Your code here
        int l = len(head);
        l=l/2;
        Node*ptr=head;
        while(l--){
            ptr=ptr->next;
        }
        return ptr->data;
    }
};
