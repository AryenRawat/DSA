class Solution {
public:
    vector<int> longestObstacleCourseAtEachPosition(vector<int>& obstacles) {
        vector<int>dp;
        vector<int>v;
        int n=obstacles.size();
        for(int i=0;i<n;i++){
            int len=lower_bound(dp.begin(),dp.end(),obstacles[i]+1)-dp.begin();
            if(len==dp.size()){
                dp.push_back(obstacles[i]);
            }else{
                dp[len]=obstacles[i];
            }
            v.push_back(len+1);
        }
        return v;
    }
};
