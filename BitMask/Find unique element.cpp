class Solution{
  public:
    int findUnique(int a[], int n, int k) {
        map<int,int>m;
        for(int i=0;i<n;i++) m[a[i]]++;
        
        for(auto it:m){
            if(it.second%k!=0) return it.first;
        }
        
    }
};
