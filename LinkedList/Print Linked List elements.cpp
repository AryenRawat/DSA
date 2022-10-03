class Solution
{
    public:
    void display(Node *head)
    {
      //your code goes here
      Node*ptr=head;
      while(ptr!=nullptr){
          cout << ptr->data << " ";
          ptr=ptr->next;
      }
    }
};
