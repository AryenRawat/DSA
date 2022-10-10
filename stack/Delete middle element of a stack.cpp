class Solution
{
    public:
    //Function to delete middle element of a stack.
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
        // code here.. 
        stack<int>sp;
        int c=0;
        while(!s.empty()){
            sp.push(s.top());
            c++;
            s.pop();
            if(c==(sizeOfStack)/2){
                s.pop();
            }
        }
        while(!sp.empty()){
            s.push(sp.top());
            sp.pop();
        }
    }
};
