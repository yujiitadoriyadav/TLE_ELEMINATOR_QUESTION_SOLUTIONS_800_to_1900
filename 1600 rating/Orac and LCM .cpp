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
 int x; cin>>x;
int g =x;
int ans=0;
for(int i=1;i<n;i++){
          cin>>x;
         int l =(g*x)/__gcd(g,x);
         ans = __gcd(ans,l);
         g =__gcd(g,x);
        
    
}

cout<<ans<<endl;
}

int32_t main() {  
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

