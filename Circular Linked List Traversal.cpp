
//User function Template for C++

/* structure for a node 
struct Node
{
    int data;
    struct Node *next;
}; */

/* Function to print nodes in a given Circular linked list */
void printList(struct Node *head)
{
  // code here
  Node*ptr=head;
  cout << ptr->data << " ";
  ptr=ptr->next;
  while(ptr!=head){
      cout << ptr->data << " ";
      ptr=ptr->next;
  }

  
}
