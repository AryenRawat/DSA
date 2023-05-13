class Solution {
  public:
    vector<int> changeBits(int N) {
        // code here
        int cnt=0;
        int x=N;
        while(N){
            cnt++;
            N=N>>1;
        }
        int num=(pow(2,cnt))-1;
        return {abs(num-x),num};
    }
};
