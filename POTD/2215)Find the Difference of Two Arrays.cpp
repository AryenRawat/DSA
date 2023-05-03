class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        set<int>ans1;
        for(auto it:nums1){
            bool flag=0;
            for(auto e:nums2){
                if(it==e){flag=1;break;}
            }
            if(!flag) ans1.insert(it);
        }
        set<int>ans2;
        for(auto it:nums2){
            bool flag=0;
            for(auto e:nums1){
                if(it==e){flag=1;break;}
            }
            if(!flag ) ans2.insert(it);
        }
        vector<int>v1,v2;
        for(auto it:ans1) v1.push_back(it);
        for(auto it:ans2) v2.push_back(it);
        return {{v1},{v2}};
    }
};
