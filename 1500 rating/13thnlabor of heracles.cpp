
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
    int n; cin>>n;
    vector<int>w(n+1,0);
    vector<int>deg(n+1,0);

    for(int i=1;i<=n;i++) cin>>w[i];
    for(int i=1;i<n;i++){
        int u,v; cin>>u>>v;
        deg[u]++,deg[v]++;
    }
    vector<int>vec;
    int ans =0;

    for(int i=1;i<=n;i++){
        ans+=w[i];
        while(deg[i]>1){
            vec.push_back(w[i]);
            deg[i]--;
        }
    }
    sort(all(vec));
    // total diff color ->  n-1
    for(int i=1;i<n;i++){
      cout<<ans<<" ";
      if(!vec.empty()){
        ans+=vec.back();
        vec.pop_back();
      }
    }

    cout<<endl;
   
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