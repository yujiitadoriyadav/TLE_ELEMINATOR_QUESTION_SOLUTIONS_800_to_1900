#include <bits/stdc++.h>
using namespace std;

#define int long long 
#define pb push_back
#define all(x) x.begin(), x.end()
#define endl '\n' 
#define F first
#define S second
#define sz(x) (int)x.size()
const int mod=1e9+7;
vector<vector<int>>a;
vector<int> in, out;

int dfs(int  u,int d,int p){
  int maxi=d;
  for(int v:a[u]){
    if(v==p) continue;
    maxi = max(maxi,dfs(v,d+1,u));
  }

  in[d]++;
  out[maxi]++;
  return maxi;
}

void solve(){
    int n; cin>>n;
    a.clear();
	a.resize(n);
    for(int i=0;i<n-1;i++){
        int x,y; cin>>x>>y;
        x--;y--;
        a[x].pb(y);
        a[y].pb(x);
    }
    in.assign(n,0);
    out.assign(n,0);

    dfs(0,0,-1);
    int ans=0,cur=0;
    for(int i=0;i<n;i++){
        cur+=in[i];
        ans = max(ans,cur);
        cur-=out[i];
    }

    cout<<n-ans<<endl;


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

