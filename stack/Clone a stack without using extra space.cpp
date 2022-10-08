class Solution{
    public:
    void clonestack(stack<int> st, stack<int>& cloned)
    {
        //code here
        if(st.empty()){
            return;
        }
        stack<int>t;
        while(!st.empty()){
            t.push(st.top());
            st.pop();
        }
        while(!t.empty()){
            cloned.push(t.top());
            t.pop();
        }
    }
};
