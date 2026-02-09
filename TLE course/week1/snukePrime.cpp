#include<bits/stdc++.h>
using namespace std;
const int N=1e6+1;
long long diff[N];
void solve(){
    int n;
    cin>>n;
    int c;
    cin>>c;
    vector<int>start(n),end(n),cost(n);
    for(int i=0;i<n;i++){
        cin>>start[i]>>end[i]>>cost[i];
    }
//   memset(diff,0,sizeof(diff));
//     for(int i=0;i<n;i++){
//         diff[start[i]]+=cost[i];
//        if(end[i]+1<N) diff[end[i]+1]-=cost[i];
//     }
//     for(int i=1;i<N;i++){
//         diff[i]+=diff[i-1];
//     }
//    long long ans =0;
//     for(int i=0;i<N;i++){
//         ans+=min(diff[i],(long long)c);
//     }
//     cout<<ans<<endl;
 set<int>st;
 for(int i=0;i<n;i++){
    st.insert(start[i]);
    st.insert(end[i]-1);
 }
 int idx=0;
 map<int,int>mp;
 for(auto it:st){
    mp[it]=idx;
    idx++;
 }
 vector<long long >diff(idx+1,0);
 for(int i=0;i<n;i++){
    diff[mp[start[i]]]+=cost[i];
    diff[mp[end[i]+1]]-=cost[i];
 }
 for(int i=1;i<=idx;i++){
    diff[i]+=diff[i-1];
 }
 vector<int>a(st.begin(),st.end());
 long long ans =0;
 for(int i=1;i<a.size();i++){
    long long span = a[i]-a[i-1];
    ans+=min(diff[i-1],c)*span;
 }
 cout<<ans<<endl;

}
int main(){
    solve();
}

