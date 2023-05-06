class Solution {
public:
    int mod=1000000007;
    int numSubseq(vector<int>& nums, int target) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int cnt=0;
        int i=0;int j=n-1;
        vector<int>pow2(n+1,1);
        for(int i=1;i<n;i++){
            pow2[i]=(2*pow2[i-1])%mod;
        }
        while(j>=i){
            if(nums[j]+nums[i]<=target){
                cnt=(cnt+pow2[j-i])%mod;
                i++;
            }else j--;
        }
        return cnt;
    }
};
