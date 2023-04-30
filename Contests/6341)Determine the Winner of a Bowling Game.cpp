class Solution {
public:
    int isWinner(vector<int>& player1, vector<int>& player2) {
        int sum1=0,sum2=0;
        int cnt=0;
        for(auto it:player1){
            if(cnt && it!=10){
                sum1+=2*it;cnt--;
            }else if(cnt && it==10){
                sum1+=2*it;cnt=2;
            }
            else if(it==10) {cnt=2;sum1+=it;}
            else sum1+=it;
        }
        cnt=0;
        for(auto it:player2){
            if(cnt && it!=10){
                sum2+=2*it;cnt--;
            }else if(cnt && it==10){
                sum2+=2*it;cnt=2;
            }
            else if(it==10) {cnt=2;sum2+=it;}
            else sum2+=it;
        }
        if(sum1==sum2) return 0;
        else if(sum1>sum2) return 1;
        else return 2;
        
    }
};
