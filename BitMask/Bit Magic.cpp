class Solution {
  public:
    int bitMagic(int n, vector<int> &arr) {
        // code here
        int ans=0,l=0,r=n-1;
        while(l<r){
            if(arr[l]!=arr[r]){
                ans++;
            }
            l++;
            r--;
        }
        return ceil(ans/2.0);
    }
};
