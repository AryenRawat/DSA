class Solution{
  public:
    int MissingNumber(vector<int>& array, int n) {
        // Your code goes here
        int req = n*(n+1)/2;
        int curr=0;
        for(auto it:array) curr+=it;
        return req-curr;
    }
};
