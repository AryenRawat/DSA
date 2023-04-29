class Solution
{
    public:
    //Function to check if the number is sparse or not.
    bool isSparse(int n)
    {
        // Your code
        int cnt=0;
        while(n>0){
            if(n&1) cnt++;
            else cnt=0;
            
            if(cnt==2) return 0;
            n=n>>1;
        }
        return 1;
    }
};
