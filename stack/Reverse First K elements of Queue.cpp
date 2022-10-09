queue<int> modifyQueue(queue<int> q, int k) {
    // add code here.
    stack<int>t;
    queue<int>ans;
    while(k--){
            t.push(q.front());
            q.pop();
        
    }
    while(!t.empty()){
        ans.push(t.top());
        t.pop();
    }
    while(!q.empty()){
        ans.push(q.front());
        q.pop();
    }return ans;
}
