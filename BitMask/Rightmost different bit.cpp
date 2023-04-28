class Solution
{
    public:
    //Function to find the first position with different bits.
    int posOfRightMostDiffBit(int m, int n)
    {
        // Your code here
        int res=m^n;
        int cnt=1;
        while(res>0){
            if(res&1) return cnt;
            cnt++;
            res=res>>1;
        }
        return -1;
    }
};
