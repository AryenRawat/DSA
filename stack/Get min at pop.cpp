//Function to push all the elements into the stack.
stack<int> _push(int arr[],int n)
{
   // your code here
    stack<int>st;
    int m = INT_MAX;
    for(int i=0;i<n;++i){
        m = min(m,arr[i]);
        st.push(m);
    }return st;
}

//Function to print minimum value in stack each time while popping.
void _getMinAtPop(stack<int>s)
{
    // your code here
    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }
}
