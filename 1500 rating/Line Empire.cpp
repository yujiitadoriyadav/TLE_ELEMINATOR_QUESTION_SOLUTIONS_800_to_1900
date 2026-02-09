#include <bits/stdc++.h>
using namespace std;

#define int long long 
#define pb push_back
#define all(x) x.begin(), x.end()
#define endl '\n' 
#define F first
#define S second
#define sz(x) (int)x.size()

void solve() {
  int n,a,b; cin>>n>>a>>b;
  vector<int>v(n+1);
  for(int i=1;i<=n;i++) cin>>v[i];

  int k=0,ans=0;
  ans=0;
  for(int i=1;i<=n;i++){
    ans+=(v[i]-k)*b;
    if((v[i]-k)*a<=(n-i)*(v[i]-k)*b){
        ans+=(v[i]-k)*a;
        k=v[i];
    }

  }
  cout<<ans<<endl;
  
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

