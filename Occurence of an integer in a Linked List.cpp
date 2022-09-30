  Node is defined as 
struct node
{
    int data;
    struct node* next;
    
    node(int x){
        data = x;
        next = NULL;
    }
}*head;
*/
class Solution
{
    public:
    int count(struct node* head, int search_for)
    {
    //add your code here
    int ans=0;
    while(head!=nullptr){
        if(head->data == search_for){
            ans++;
        }
        head=head->next;
    }
    return ans;
    }
};
