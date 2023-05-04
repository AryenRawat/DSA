class Solution{
	public:
		vector<string> AllPossibleStrings(string s){
		    // Code here
		    vector<string>ans;
		    int n=s.length();
		    for(int i=0;i<pow(2,n);i++){
		        string t;
		        for(int j=0;j<n;j++){
		            if(i & 1<<j) t+=s[j];
		        }
		        if(!t.empty()) ans.push_back(t);
		    }
		    sort(ans.begin(),ans.end());
		    return ans;
		}
};
