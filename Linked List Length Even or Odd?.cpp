
/*structure of a node of the linked list is as
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
// Function should return 0 is length is even else return 1
int isLengthEvenOrOdd(struct Node* head)
{
     //Code here
     Node*ptr=head;
     int c=1;
     while(ptr!=nullptr){
        c++;
        ptr=ptr->next;
     }
     if(c%2==0){
         return 1;
     }else{
         return 0;
     }
}
