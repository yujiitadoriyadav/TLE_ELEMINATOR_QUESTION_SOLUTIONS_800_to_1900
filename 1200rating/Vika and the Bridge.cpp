
#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,k;
    cin>>n>>k;
    int ans = n;
 
    vector<int> v(n);
    for(auto &it: v) cin>>it;
 
    map<int,vector<int>> m;
 
    for(int i=0;i<n;i++) m[v[i]].push_back(i);
 
    for(auto it: m){
        vector<int> jumps;
        jumps.push_back(it.second[0]);
        jumps.push_back(n-1-(it.second.back()));
 
        for(int i=1;i<it.second.size();i++){
            jumps.push_back(it.second[i]-it.second[i-1]-1);
        }
 
        sort(jumps.rbegin(),jumps.rend());
        int kush = jumps.size() > 1 ? max(jumps[0]/2,jumps[1]) : jumps[0]/2;
 
        ans = min(ans,kush);
    }
 
    cout<<ans<<endl;
}
int main(){
    int t;
    cin>>t;
 
    while(t--){
       solve();
    }
}