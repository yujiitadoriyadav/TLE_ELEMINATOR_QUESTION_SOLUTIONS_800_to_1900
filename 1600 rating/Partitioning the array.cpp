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
   for(int i=0;i<n;i++){
     cin>>a[i];    
   }
   int ans =0;
   for(int j=1;j<=n;j++){
    if(n%j==0){
      int g=0;
      for(int i=0;i+j<n;i++) g= __gcd(g,abs(a[i+j]-a[i]));
      if(g!=1) ans++;
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

