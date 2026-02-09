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
     int res =0;
     while(n){
        res+=n;
        n/=2;
     }
     cout<<res<<endl;
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
