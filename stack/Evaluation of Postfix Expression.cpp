class Solution
{
    public:
    //Function to evaluate a postfix expression.
    int evaluatePostfix(string S)
    {
        // Your code here
        stack<int>s;
        for(int i=0;i<S.size();++i){
            if(S[i]>='0' && S[i]<='9'){
                s.push(S[i]-'0');
            }else{
                int num1 = s.top();
                s.pop();
                int num2 = s.top();
                s.pop();
                if(S[i]=='*'){
                    s.push(num1*num2);
                }else if(S[i]=='/'){
                    s.push(num2/num1);
                }else if(S[i]=='-'){
                    s.push(num2-num1);
                }else if(S[i]=='+'){
                    s.push(num1+num2);
                }
            }
        }
        return s.top();
    
    }
};
