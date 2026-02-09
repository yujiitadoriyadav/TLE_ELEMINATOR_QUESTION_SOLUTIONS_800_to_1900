#include<bits/stdc++.h>
#define int long long 
using namespace std;
int mostbit(int n){
    if(n==0) return 0;
    int c =0;
    while(n!=0){
        n=n/2;
        c++;
    }
    return c;
}
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n+1);
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
             cin>>a[i];
            int msb = mostbit(a[i]);
            mp[msb]++;
        }

        int count=0;
        for(auto p:mp){
            int size=p.second;
            
            count+=(size)*(size-1)/2;
        }
        cout<<count<<endl;
        
    }
}