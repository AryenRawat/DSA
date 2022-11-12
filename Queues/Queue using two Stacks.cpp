void StackQueue :: push(int x)
{
    // Your Code
    s1.push(x);
}

//Function to pop an element from queue by using 2 stacks.
int StackQueue :: pop()
{
        // Your Code
        int x=-1;
        if(s1.empty()) return x;
        else{
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
            int a=s2.top();
            s2.pop();
            while(!s2.empty()){
                s1.push(s2.top());
                s2.pop();
            }
            return a;
        }
}
