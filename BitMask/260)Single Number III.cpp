//using hashmap
class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        map<int,int>m;
        vector<int>ans;
        for(auto it:nums) m[it]++;
        for(auto it:m){
            if(it.second==1) ans.push_back(it.first);
        }
        return ans;
    }
};
