/* structure for a node 
struct Node
{
	int data;
	struct Node *next;
};
*/

/* Function to delete a given node from the list */
void deleteNode(struct Node **head, int key)
{

// Your code goes here
   Node*ptr=*head,*qtr=(*head)->next;
   while(qtr->data!=key){
       ptr=ptr->next;
       qtr=qtr->next;
   }
   ptr->next=qtr->next;
   qtr->next=nullptr;
}

/* Function to reverse the linked list */
 void reverse(struct Node** head_ref)
{

// Your code goes here

Node*prev=nullptr,*curr=*head_ref;
while(curr!=nullptr){
    Node*temp=curr->next;
    curr->next=prev;
    prev=curr;
    curr=temp;
}
*head_ref=prev->next;

}
