class Solution {
public:
    char findTheDifference(string s, string t) {
        string temp = s+t;
        sort(temp.begin(),temp.end());
        int res=0;
        for(auto it:temp){
            res^=int(it);
        }
        return char(res);
    }
};
