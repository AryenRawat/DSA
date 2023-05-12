#define ll long long

long long int calculate(int a[], int n)
{
    // Complete the function
    ll ans=0;
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        if(mp.find(a[i])!=mp.end()) ans+=mp[a[i]];
        mp[a[i]]++;
    }
    
    return ans;
    
}
