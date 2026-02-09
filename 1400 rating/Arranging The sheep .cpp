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
  int n; cin>>n;
  string s; cin>>s;
  int c=0,x=0,ans=0;
  for(int i=0;i<n;i++){
    if(s[i]=='*') c++;
  }
  for(int i=0;i<n;i++){
     if(s[i]=='*') x++;
     else ans+=min(x,c-x);
  }
  cout<<ans<<endl;
}

int32_t main() {  
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
