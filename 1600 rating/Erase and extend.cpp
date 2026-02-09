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


void solve() {
  int n,k; cin>>n>>k;
  string s; cin>>s;
   string ans ;
   ans.assign(k,'z');

   for(int i=1;i<=n;i++){
     string pre= s.substr(0,i);
     string t ;
     while((int)t.size()<k) t+=pre;
     t.resize(k);
     ans = min(ans,t);
   }
   cout<<ans<<endl;
}

int32_t main() {  
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    //cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
