//return the address of the string
char* reverse(char *S, int len)
{
    //code here
    stack<char>s1;
    for(int i=0;i<len;i++){
        s1.push(S[i]);
    }
    int j=0;
    char *ans=new char[len];
    while(!s1.empty()){
        ans[j]=s1.top();
        s1.pop();
        j++;
    }
    return ans;
    
    
}
