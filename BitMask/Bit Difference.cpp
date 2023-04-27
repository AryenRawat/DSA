class Solution{
    public:
    // Function to find number of bits needed to be flipped to convert A to B
    int countBitsFlip(int a, int b){
        // Your logic here
        int cnt=0;
        int req=a^b;
        while(req>0){
            if(req&1) cnt++;
            req=req>>1;
        }
        return cnt;
    }
};
