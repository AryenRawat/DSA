class Solution {
public:
    int maxVowels(string s, int k) {
        unordered_set<char>vowels{'a','e','i','o','u'};
        int cnt=0;
        int n=s.length();
        for(int i=0;i<k;i++){
            cnt+=vowels.count(s[i]);
        }
        int ans=cnt;
        for(int i=k;i<n;i++){
            cnt+= vowels.count(s[i])-vowels.count(s[i-k]);
            ans=max(ans,cnt);
            if(ans==k) return k;
        }
        return ans;
    }
};
