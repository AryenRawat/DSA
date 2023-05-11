class Solution{
    public:
    int maxOnes(int a[], int n)
    {
        // Your code goes here
        int sum=0,maxx=0,cnt=0;
        for(int i=0;i<n;i++){
            if(a[i]&1) sum--,cnt++;
            else sum++;
            maxx=max(sum,maxx);
            if(sum<0)sum=0;
        }
        return maxx+cnt;
    }
};
