
/* Link list Node 
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
*/

/*You are required to complete below method*/
Node* deleteNode(Node *head,int x)
{
    //Your code here
    Node*p= head;
    if(x==1){
        head=head->next;
        return head;
    }
    --x;
    while(--x && p!=nullptr){
        p=p->next;
    }
    Node *temp = p->next;
    p->next=p->next->next;
    delete temp;
    return head;
}
