string transform(string S){
    //complete the function here
    for(int i=0;i<S.size();++i){
        if(isupper(S[i])){
            S[i]=tolower(S[i]);
        }
    }
    
    
    stack<char>s1;
    string ans="";
    int cnt=1;
    for(int i=0;i<S.size();++i){
        if(s1.empty()){
            s1.push(S[i]);
            continue;
        }else if(s1.top()==S[i]){
            cnt++;
        }else if(s1.top()!=S[i]){
            ans+=to_string(cnt);
            ans+=s1.top();
            s1.pop();
            s1.push(S[i]);
            cnt=1;
            
        }
    }
    ans+=to_string(cnt);
    ans+=s1.top();
    return ans;
}
