#include <bits/stdc++.h>
using namespace std;

#define int long long 
#define pb push_back
#define all(x) x.begin(), x.end()
#define endl '\n' 
#define F first
#define S second
#define sz(x) (int)x.size()
vector<pair<int,int>> ed[200005];  
int dp[200005];  

void dfs(int p,int fa ,int id){
    for(auto v:ed[p]){
        if(v.first!=fa){
            dp[v.first] = dp[p] + (id>v.second);
            dfs(v.first,p,v.second);
        }
    }
}

void solve() {
    int n; cin >> n;
    for (int i = 1; i <= n; i++) ed[i].clear(); 
     memset(dp, 0, sizeof(dp));    
   
    dp[1]=1;
    for(int i = 0; i < n - 1; i++) {
        int u, v; cin >> u >> v;
        ed[u].push_back({v,i});
        ed[v].push_back({u,i});
    }

    dfs(1,0,0);

    cout<<*max_element(dp+1,dp+n+1)<<endl;

   
}

int32_t main() {  
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
