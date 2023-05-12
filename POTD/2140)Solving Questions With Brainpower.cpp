class Solution {
public:
    #define ll long long
    ll dp[200001] = {{0}};

    ll getpoints(ll idx,vector<vector<int>>& questions,int n){
        if(dp[idx]!=0) return dp[idx];
        if(dp[idx]==n-1) return questions[idx][0];
        if(idx>=n) return 0;

        ll select = questions[idx][0]+getpoints(idx+questions[idx][1]+1,questions,n);
        ll ignore = 0+getpoints(idx+1,questions,n);

        return dp[idx] = max(select, ignore);
    }

    long long mostPoints(vector<vector<int>>& questions) {
        int n = questions.size();
        return getpoints(0, questions, n);
    }
};
