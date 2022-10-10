class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        // Your code here
        stack<char>st;
        for(auto i:x){
            if(  i=='(' || i=='{' || i=='['  ){
                st.push(i);
            }else{
                while(st.empty() ||  (st.top()=='(' && i!=')')|| ( st.top()=='{' && i!='}' ) || (st.top()=='[' && i!=']')){
                    return 0;
                }
                st.pop();
            }
            
        }return st.empty();
    }

};
