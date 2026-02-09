
#include <bits/stdc++.h>
using namespace std;

#define int long long 
#define pb push_back
#define all(x) x.begin(), x.end()
#define endl '\n' 
#define F first
#define S second
#define sz(x) (int)x.size()
#define DEV_OP
const int mod =1e9+7;


void solve() {
    int n,m; cin>>n>>m;
  vector<vector<int>>adj(n+1);
  while(m--){
        int u,v; cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
  }
  vector<bool>vis(n+1,0);
  priority_queue<int,vector<int>,greater<int>>pq;

   vector<int>ans;
   vis[1]=1;
  pq.push(1);
  while(!pq.empty()){
     int n =pq.top();
    
     pq.pop();

     ans.push_back(n);

     for(auto e:adj[n]){
         if(!vis[e]){
            pq.push(e);
             vis[e] = true; 
         }
     }

  }
  for(auto &p:ans){
    cout<<p<<" ";
  }
}

int32_t main() {  
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
   // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}