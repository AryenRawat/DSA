
class Solution{
    public:
    int removeConsecutiveSame(vector <string > v) 
    {
        // Your code goes here
        stack<string> s1;
        for(auto i:v){
            if(s1.empty()){
               s1.push(i); 
               continue;
            }else{
                if(!s1.empty() && s1.top()==i){
                    s1.pop();
                }else{
                    s1.push(i);
                }
            }
        }
        // int cnt=0;
        // while(!s1.empty()){
        //     cnt++;
        //     s1.pop();
        // }
        return s1.size();
    } 
};
