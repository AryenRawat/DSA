class Solution {
public:
    int minBitFlips(int start, int goal) {
        int req=start^goal;
        int cnt=0;
        while(req>0){
            if(req&1) cnt++;
            req=req>>1;
        }
        return cnt;
    }
};
