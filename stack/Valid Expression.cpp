bool valid(string s)
{
    // code here
    stack<char>s1;
    for(auto i:s){
        if(i=='(' || i=='[' || i=='{'){
            s1.push(i);
        }else{
            if(s1.empty() ||    (s1.top()=='(' && i!=')') ||   (s1.top()=='[' && i!=']') || (s1.top()=='{' && i!='}')){
                return 0;
            }
            s1.pop();
        }
    }
    return s1.empty();
}
