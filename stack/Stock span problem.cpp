class Solution
{
    public:
    //Function to calculate the span of stockâ€™s price for all n days.
    vector <int> calculateSpan(int price[], int n)
    {
       // Your code here
       stack<pair<int,int>> s1;
       vector<int>v1;
       for(int i=0;i<n;++i){
           if(s1.empty()){
               v1.push_back(1);
           }else if(!s1.empty() &&  s1.top().first>price[i]){
               v1.push_back(i-s1.top().second);
           }else if(!s1.empty()  && s1.top().first<=price[i]){
               while(!s1.empty()  && s1.top().first<=price[i]){
                   s1.pop();
               }if(s1.empty()){
                   v1.push_back(i+1);
               }else{
                   v1.push_back(i-s1.top().second);
               }
           }
           s1.push(make_pair(price[i],i));
       }
       
       return v1;
    }
};
