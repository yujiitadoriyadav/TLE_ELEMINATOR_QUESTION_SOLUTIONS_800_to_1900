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
string x[6]={"abc","acb","bac","bca","cab","cba"};
int s[6][200005];

void solve() {
  int n,m; cin>>n>>m;
  string S; cin>>S;
  for(int t=0;t<6;t++){
    for(int i=1;i<=n;i++){
        s[t][i] = s[t][i-1]+(S[i-1]!=x[t][(i-1)%3]);
    }
  }
  while(m--){
    int l,r; cin>>l>>r;
     int ans =INT_MAX;
     for(int t=0;t<6;t++){
         ans = min(ans,s[t][r] -s[t][l-1]);
     }

     cout<<ans<<endl;
  }

}

int32_t main() {  
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t=1;
   // cin >> t;
    while (t--) solve();
    return 0;
}
