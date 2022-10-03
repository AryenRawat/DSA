class Solution
{
    public:
    Node* deleteNode(Node *head_ref, int x)
    {
      //Your code here
      Node*p=head_ref;
      if(x==1){
          p=p->next;
          return p;
      }
      --x;
      while(--x && p!=nullptr ){
          p=p->next;
      }
      Node*temp = p->next;
      p->next=p->next->next;
      temp->prev=nullptr;
      return head_ref;
      
    }
};
