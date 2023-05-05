class Solution{   
public:
    int swapBitGame(long long N){
        // code here 
        int cnt=0;
        while(N>0){
            if(N&1) cnt++;
            N=N>>1;
        }
        if(cnt&1) return 1;
        else return 2;
    }
};
