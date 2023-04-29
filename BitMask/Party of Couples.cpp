class Solution{
    public:
    int findSingle(int N, int arr[]){
        // code here
        int curr=0;
        for(int i=0;i<N;i++) curr^=arr[i];
        return curr;
    }
};
