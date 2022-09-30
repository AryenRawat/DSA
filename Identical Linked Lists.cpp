
/*
Structure of the node of the linked list is as
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

int len(Node *head){
    int ct=0;
    while(head!=nullptr){
        ct++;
        head=head->next;
    }
    return ct;
}


//Function to check whether two linked lists are identical or not. 
bool areIdentical(struct Node *head1, struct Node *head2)
{
    // Code here
    int l1,l2;
        l1=len(head1);
        l2=len(head2);
        if(l1!=l2){
            return false;
        }
    while(head1!=nullptr && head2!=nullptr){
        
        if(head1->data!=head2->data){
            return false;
        }
        head1=head1->next;
        head2=head2->next;
        if((head1==nullptr && head2!=nullptr) || (head2==nullptr && head1!=nullptr)){
            return false;
        }
        
    }return true;
}
