class Solution{
  public:
    //Function to insert a node at the beginning of the linked list.
    Node *insertAtBegining(Node *head, int x) {
       // Your code here
       Node*ptr = new Node(x);
       //ptr->data=x;
       if(head==nullptr){
           return ptr;
       }
       ptr->next=head;
       head=ptr;
       return head;
    }
    
    
    //Function to insert a node at the end of the linked list.
    Node *insertAtEnd(Node *head, int x)  {
       // Your code here
       Node*qtr=new Node(x);
       Node*ptr=head;
    //   qtr->data=x;
       if(head==nullptr){
           return qtr;
       }
       while(ptr->next!=nullptr){
           ptr=ptr->next;
       }
       ptr->next=qtr;
       return head;
       
    }
};
