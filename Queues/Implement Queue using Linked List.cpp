void MyQueue:: push(int x)
{
        // Your Code
        QueueNode *ptr=new QueueNode(x);
        if(front==nullptr){
            front=rear=ptr;
        }else{
            rear->next=ptr;
            rear=ptr;
        }
}

//Function to pop front element from the queue.
int MyQueue :: pop()
{
        // Your Code    
        int a=-1;
        QueueNode *ptr=front;
        if(front==nullptr){
            return a;
        }else{
             a = ptr->data;
            front=front->next;
            delete ptr;
            return a;
            
        }
}
