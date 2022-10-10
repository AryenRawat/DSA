//Function to push an integer into the stack.
void MyStack ::push(int x) 
{
    // Your Code
    StackNode *ptr=new StackNode(x);
    ptr->next=top;
    top=ptr;
}

//Function to remove an item from top of the stack.
int MyStack ::pop() 
{
    // Your Code
    if(top==nullptr){
        return -1;
    }else{
        int x=top->data;
        top=top->next;
        return x;
    }
    
}
