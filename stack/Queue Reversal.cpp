//Function to reverse the queue.
queue<int> rev(queue<int> q)
{
    // add code here.
    queue<int>temp;
    stack<int>help;
    while(!q.empty()){
        help.push(q.front());
        q.pop();
    }
    while(!help.empty()){
        temp.push(help.top());
        help.pop();
    }
    return temp;
    
}
