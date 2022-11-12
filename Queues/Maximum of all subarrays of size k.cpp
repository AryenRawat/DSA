class Solution
{
  public:
    //Function to find maximum of each subarray of size k.
    vector <int> max_of_subarrays(int *arr, int n, int k)
    {
        // your code here
        vector<int>vt;
        deque<int>qt;
        for(int i=0;i<n;i++){
            
            while(!qt.empty()&&qt.front()==i-k){
                qt.pop_front();
            }
            
            while(!qt.empty()&& arr[qt.back()]<=arr[i]){
                qt.pop_back();
            }
            qt.push_back(i);
            if(i>=k-1){
                vt.push_back(arr[qt.front()]);
            }
            
        }return vt;
    }
    
    
};
