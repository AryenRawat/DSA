
class Solution{
public:
    stack<int> Reverse(stack<int> St){
        stack<int>ans;
        while(!St.empty()){
            ans.push(St.top());
            St.pop();
        }
        return ans;
    }
};
