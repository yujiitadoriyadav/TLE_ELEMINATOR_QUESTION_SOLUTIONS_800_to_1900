#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x;
    cin>>n>>x;
    map<long long,int>mp;
    vector<long long>a(n+1,0);
    
    mp[0]=1;
    long long  ans =0;
    for(int i=1;i<=n;i++){
        int v;
        cin>>v;
        a[i]=a[i-1]+v;
        if(mp.find(a[i]-x)!=mp.end()){
            ans+=mp[a[i]-x];
        }
        mp[a[i]]++;
    }
   cout<<ans<<endl;
}