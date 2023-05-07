class Solution{
public:
    string stringMirror(string str){
        // Code here
        int n=str.length();
        string temp="";
        int i;
        for(i=1;i<n;i++){
            if(str[i]>str[i-1]) break;
            if(i==1 && str[i]==str[i-1]) break;
        }
        temp+=str.substr(0,i);
        string ans=temp;
        reverse(temp.begin(),temp.end());
        ans+=temp;
        return ans;
    }
};
