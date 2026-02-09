#include <bits/stdc++.h>
using namespace std;

#define int long long 
#define pb push_back
#define all(x) x.begin(), x.end()
#define endl '\n' 
#define F first
#define S second
#define sz(x) (int)x.size()
int cuts =0;

int dfs(int u ,int p ,vector<vector<int>>&g){
   int sz =1;

   for(auto v: g[u]){
     if(v==p) continue;
     int childsize = dfs(v,u,g);
     if(childsize%2==0) cuts++;
     else{
       sz+=childsize;
     }
   }
   return sz;
}
void solve() {
 int n; cin>>n;
 vector<vector<int>>g(n+1);
 for (int i = 0; i < n - 1; i++) {
        int u, v;
        cin >> u >> v;
        g[u].pb(v);
        g[v].pb(u);
   }
 if (n % 2 == 1) {
        cout << -1 << endl;
        return;
    } 
  
  dfs(1,-1,g);
  cout<<cuts<<endl;  
 
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

