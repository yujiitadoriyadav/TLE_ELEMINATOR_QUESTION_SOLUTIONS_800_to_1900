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
     
     vector<int>a(n);
     for(int i=0;i<n;i++) cin>>a[i];

     unordered_map<int,int>mp;
     int ans =0;
     for(int i=0;i<n;i++){
       int k = a[i]-i;
       mp[k]+=a[i];
       ans = max(ans,mp[k]);
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
