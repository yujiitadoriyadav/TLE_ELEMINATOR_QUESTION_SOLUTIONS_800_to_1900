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

void dfs(int node, int parent, const vector<vector<int>>& adj, 
         const vector<pair<int,int>>&l, vector<vector<int>>& dp){
  for(int child: adj[node]){
    if(child==parent) continue;

    dfs(child,node,adj,l,dp);
    // take minimum;
    dp[node][0]+=max(abs(l[node].F-l[child].F)+dp[child][0],abs(l[node].F-l[child].S)+dp[child][1]);
   // maximum
       dp[node][1]+=max(abs(l[node].S-l[child].F)+dp[child][0],abs(l[node].S-l[child].S)+dp[child][1]);
  }

}

void solve() {
  int n; cin>>n;
  vector<pair<int,int>>l(n+1);
  for(int i=1;i<=n;i++){
    int x,y; cin>>x>>y;
    l[i]= {x,y};
  }
  vector<vector<int>>adj(n+1);
  for(int i=0;i<n-1;i++){
     int x,y; cin>>x>>y;
     adj[x].pb(y);
     adj[y].pb(x);
  }

    vector<vector<int>> dp(n + 1, vector<int>(2, 0));

   
  dfs(1,0,adj,l,dp);
  cout<<max(dp[1][0],dp[1][1])<<endl;
}

int32_t main() {  
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
