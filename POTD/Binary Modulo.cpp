class Solution{
    public:
        int modulo(string s,int m)
        {
            //code here
            int ans=0;
            int t=1;
            for(int i=s.size()-1;i>=0;i--){
                if(s[i]=='1'){
                    ans=(ans+t)%m;
                }
                t*=2;
                t=t%m;
            }
            ans=ans%m;
            return ans;
        }
};
