#include <bits/stdc++.h>
using namespace std;
const int mod =1e9+7;
#define int long long 
#define pb push_back
#define all(x) x.begin(), x.end()
#define endl '\n' 
#define F first
#define S second
#define sz(x) (int)x.size()
#define DEV_OP


void solve() {
   int n,m; cin>>n>>m;
   vector<int>a(n),b(n);
   for(int i=0;i<n-1;i++) cin>>a[i];
   for(int i=0;i<n;i++) cin>>b[i];
   a[n-1]=1; // c[i]=i i=1; pair banne hai 
   sort(all(a));
   sort(all(b));
   int c=0;
  for(int i=0;i<n;i++){
    if(a[c]<b[i]) c++;
  }
cout<<n-c<<endl;
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
