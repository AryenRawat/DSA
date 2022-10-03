class Solution
{
    public:
    //Function to delete a node without any reference to head pointer.
    void deleteNode(Node *del)
    {
       // Your code here
       Node*p=del->next;
       del->data = p->data;
       del->next=p->next;
       delete p;
    }

};
