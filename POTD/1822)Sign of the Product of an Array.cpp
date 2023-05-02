class Solution {
public:
    int arraySign(vector<int>& nums) {
        int cnt1=0,cnt2=0;
        for(auto it:nums){
            if(it>0) cnt1++;
            else if(it<0) cnt2++;
            else return 0;
        }
        if((cnt2&1)==0) return 1;
        else return -1;   
    }
};
