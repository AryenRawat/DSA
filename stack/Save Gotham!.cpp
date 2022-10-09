int save_gotham(int arr[], int n)
{
    // Complete the function
    stack<int>s1;
    int sum=0;
    for(int i=n-1;i>=0;i--){
         while(!s1.empty() && arr[i] >=s1.top()){
        s1.pop();
        }
        if(s1.empty()){
            sum+=0;
        }else{
            sum+=s1.top();
            
        }s1.push(arr[i]);
        
    }return sum;
}
