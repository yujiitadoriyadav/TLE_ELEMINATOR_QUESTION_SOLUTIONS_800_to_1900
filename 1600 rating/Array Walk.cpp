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
  int n,k,z; cin>>n>>k>>z;
  vector<int>a(n);
  for(int i=0;i<n;i++) cin>>a[i];
  int ans =0;
  for(int t=0;t<=z;t++){
      int pos = k-2*t;
      if(pos<0) continue;
      int mx =0;
      int s=0;
      for(int i=0;i<=pos;i++){
         if(i<n-1){
            mx=max(mx,a[i]+a[i+1]);
         }
         s+=a[i];
      }
      ans = max(ans,s+mx*t);
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

