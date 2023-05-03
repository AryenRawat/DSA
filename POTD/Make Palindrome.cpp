//gfg
class Solution{
public:
    bool makePalindrome(int n,vector<string> &arr){
        // Code here
        map<string,int>map;
        for(auto it:arr){
            map[it]++;
            reverse(it.begin(),it.end());
            map[it]++;
        }
        
        for(auto e:map){
            if(e.second&1) return 0;
        }
        return 1;
    }
};
