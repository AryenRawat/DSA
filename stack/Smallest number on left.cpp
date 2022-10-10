class Solution{
public:
    vector<int> leftSmaller(int n, int a[]){
        // code here
        stack<int>s1;
        vector<int>v1;
        for(int i=0;i<n;++i){
            if(s1.empty()){
                v1.push_back(-1);
            }else if(!s1.empty() && s1.top()<a[i]){
                v1.push_back(s1.top());
            }else if(!s1.empty()&& s1.top()>=a[i]){
                while(!s1.empty()&&s1.top()>=a[i]){
                    s1.pop();
                }if(s1.empty()){
                    v1.push_back(-1);
                }else{
                    v1.push_back(s1.top());
                }
            }
            s1.push(a[i]);
        }
        // reverse(v1.begin(),v1.end());
        return v1;
    }
};
