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
   int n; cin>>n;
  vector<int>a(n);
  for(int i=0;i<n;i++) cin>>a[i];
  sort(all(a));
  int maxi = a[n-1];
  int ans=0;
  for(int i=1;i<n;i++){
    for(int j=0;j<i;j++){
       int x = max(a[n-1],2*a[i])-a[i]-a[j];
      int k = upper_bound(a.begin(),a.begin()+j,x)-a.begin();
      ans+=j-k;
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

