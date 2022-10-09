#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
  public:
    string reverseEqn (string s)
        {
            //code here.
            stack<char>s1;
            stack<char>temp;
            for(int i=0;i<s.size();++i){
                if(s[i]>='0' && s[i]<='9'){
                    s1.push(s[i]);
                }else{
                    while(!s1.empty()){
                        temp.push(s1.top());
                        s1.pop();
                    }
                    temp.push(s[i]);
                }
            }
            while(!s1.empty()){
                temp.push(s1.top());
                s1.pop();
            }
            string ans="";
            while(!temp.empty()){
                ans += temp.top();
                temp.pop();
            }
            return ans;
        }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout <<ob.reverseEqn (s) << endl;
    }
}

// } Driver Code Ends
