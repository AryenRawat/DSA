class Solution{ 
public:
    string onesComplement(string S,int N){
        //code here
        string ans="";
        for(auto it:S){
            ans+=it^1;
        }
        return ans;
    }
};
