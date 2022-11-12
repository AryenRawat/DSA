//Function to push an element into stack using two queues.
void QueueStack :: push(int x)
{
        // Your Code
        q1.push(x);
        while(!q2.empty()){
            q1.push(q2.front());
            q2.pop();
        }
        swap(q1,q2);
}

//Function to pop an element from stack using two queues. 
int QueueStack :: pop()
{
        // Your Code
        if(q2.empty()) return -1;
        else{
            int x=q2.front();
            q2.pop();
            return x;
        }
}
