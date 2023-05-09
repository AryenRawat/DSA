class Solution{
    public:
    long long findMissing(long long a[], long long b[], int n)
    {
        long long ans=0;
        for(long long i=0;i<n;i++){
            ans^=a[i];
        }
        for(long long i=0;i<n-1;i++){
            ans^=b[i];
        }
        return ans;
    }
};
