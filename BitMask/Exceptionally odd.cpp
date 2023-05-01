class Solution{   
public:
    int getOddOccurrence(int arr[], int n) {
        // code here
        int curr=0;
        for(int i=0;i<n;i++){
            curr^=arr[i];
        }
        return curr;
    }
};
