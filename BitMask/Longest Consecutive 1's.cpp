class Solution
{
    public:
    int maxConsecutiveOnes(int N)
    {
        // code here
        int ans=0,curr=0;
        while(N>0){
            if(N&1) curr++;
            else curr=0;
            ans=max(ans,curr);
            N=N>>1;
        }
        return ans;
    }
};
