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
  int n,k; cin>>n>>k;
  string a,b; cin>>a>>b;
  map<char,int> mp;
   int cnt = 0;
    for(int i = 0; i < n; i++) {
            if(!mp[a[i]]) 
            mp[a[i]] = ++cnt;
     }
        k = min(k, cnt);
        
        int ans = 0;
        for(int i = 0; i < (1 << cnt); i++) {
            if(__builtin_popcount(i) > k) continue; // <=k allowed
            
            int res = 0, tem = 0;
            for(int j = 0; j < n; j++) {
                if((i >> (mp[a[j]] - 1)) & 1 || a[j] == b[j]) {
                    tem++;
                    res += tem;
                } else {
                    tem = 0;
                }
            }
            ans = max(ans, res);
        }
        cout << ans << '\n';
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

