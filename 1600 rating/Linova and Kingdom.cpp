#include <bits/stdc++.h>
using namespace std;

#define int long long 
#define pb push_back
#define all(x) x.begin(), x.end()
#define endl '\n' 
#define F first
#define S second
#define sz(x) (int)x.size()
 vector<int>h,s;
void dfs(int u,int p,vector<vector<int>>&adj,int lvl){
   h[u]=lvl;
   s[u]=1;
   for(int i=0;i<adj[u].size();i++){
     if(p==adj[u][i]) continue;
     dfs(adj[u][i],u,adj,lvl+1);
     s[u]+=s[adj[u][i]];
   }
}
void solve() {
  int n,k; cin>>n>>k;
  vector<vector<int>>adj(n+1);
  for(int i=0;i<n-1;i++){
    int u,v; cin>>u>>v;
    adj[u].push_back(v);
    adj[v].push_back(u);
  }
  h.assign(n+1,0);
  s.assign(n+1,0);

  
  dfs(1,-1,adj,1);

  for(int i=1;i<=n;i++) h[i]=h[i]-s[i];
  sort(h.begin()+1,h.end());
  int ans=0;
  for(int i=n;i>=n-k+1;i--){
     ans+=h[i];
  }
  cout<<ans<<endl;

}

int32_t main() {  
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

