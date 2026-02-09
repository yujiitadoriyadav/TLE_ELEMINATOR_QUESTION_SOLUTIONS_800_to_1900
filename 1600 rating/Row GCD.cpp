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
 int n,m; cin>>n>>m;
 vector<int>a(n),b(m);
 for(int i=0;i<n;i++) cin>>a[i];
  for(int i=0;i<m;i++) cin>>b[i];
  sort(all(a));
 // gcd(a1-a2,a2);;
 // gcd(a1+b -(a2+b),a2+b);
 int G=0;
 for(int i=1;i<n;i++){
    G =__gcd(G,a[i]-a[0]);
 }
 vector<int>ans(m);
 for(int i=0;i<m;i++){
    ans[i]=__gcd(G,a[0]+b[i]);
    cout<<ans[i]<<" ";
 }
 cout<<endl;
 

 
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

