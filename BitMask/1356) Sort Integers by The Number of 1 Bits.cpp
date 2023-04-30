class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        multiset<pair<int,int> >s;
        for(auto it:arr){
            int cnt=0;
            int num=it;
            while(num>0){
                if(num&1) cnt++;
                num=num>>1;
            }
            s.insert({cnt,it});
        }
        vector<int>ans;
        for(auto it:s){
            ans.push_back(it.second);
        }
        return ans;
    }
};
