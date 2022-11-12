class Solution{
    public:
    // Function to insert element into the queue
    void insert(queue<int> &q, int k){
        // Your code here
        q.push(k);
    }
    
    // Function to find frequency of an element
    // return the frequency of k
    int findFrequency(queue<int> &q, int k){
        // Your code here
        int nt=0;
        for(int i=0;i<q.size();i++){
            if(q.front()==k){
                nt++;
            }
            int a=q.front();
            q.push(a);
            q.pop();
        }return nt;
    }
    
};
