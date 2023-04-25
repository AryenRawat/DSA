class Solution {
  public:
    int findPosition(int N) {
        // code here
        if(N==0) return -1;
        int pos=0,cnt=0,ans;
        while(N!=0){
            pos++;
            if(N&1){
                cnt++;
                if(cnt<=1) ans=pos;
                else return -1;
            }
            N=N>>1;
        }
        return ans;
    }
};
