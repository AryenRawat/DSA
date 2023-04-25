//Approach-1 using XOR
class Solution
{
public:
    vector<int> singleNumber(vector<int> nums) 
    {
        // Code here.
        vector<int>ans;
        int res=0;
        for(auto it:nums){
            res^=it;
        }
        int t1=res,t2=res;
        int rsb = res&-res;
        for(auto i:nums){
            if((rsb&i)==0) t2^=i;
            else t1^=i;
        }
        ans.push_back(t1);
        ans.push_back(t2);
        sort(ans.begin(),ans.end());
        return ans;
    }
};

//Approach-2. using MAP
class Solution
{
public:
    vector<int> singleNumber(vector<int> nums) 
    {
        // Code here.
        map<int,int>m;
        for(auto it:nums){
            m[it]++;
        }
        vector<int>ans;
        for(auto i:m){
            if(i.second==1) ans.push_back(i.first);
        }
        return ans;
    }
};
