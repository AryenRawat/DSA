class Solution{
    
    public:
    vector<int> help_classmate(vector<int> arr, int n) 
    { 
        // Your code goes here
        stack<int>st;
        vector<int>vt(n);
        st.push(-1);
        for(int i=n-1;i>=0;i--){
           while(st.top() >=arr[i]) {
               st.pop();
           }
           vt[i] = st.top();
           st.push(arr[i]);
       }
        return vt;
    } 
};
