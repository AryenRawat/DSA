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
