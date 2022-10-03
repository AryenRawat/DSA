bool isCircular(Node *head)
{
   // Your code here
   Node*ptr=head;
   while(ptr->next!=nullptr){
       if(ptr->next==head){
           return 1;
       }
       ptr=ptr->next;
   }
   return 0;
}
