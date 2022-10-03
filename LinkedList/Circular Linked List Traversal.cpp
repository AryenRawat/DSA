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
