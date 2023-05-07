class Solution {
public:
    vector<int> distinctDifferenceArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>v;
        set<int>p,s;
        for(int i=0;i<n;i++){
            p.insert(nums[i]);
            for(int j=i+1;j<n;j++){
                s.insert(nums[j]);
            }
            v.push_back(p.size()-s.size());
            s.clear();
        }
            
        return v;
    }
};
