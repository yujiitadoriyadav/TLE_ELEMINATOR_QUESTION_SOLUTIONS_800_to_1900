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
   string s; cin>>s;
   int cnt =0;
   for(int i=0;i<n;i++){
     if(s[i]=='1') cnt++;
   }
  
    if(cnt>k && n>=2*k) cout<<"Bob"<<endl;
   else cout<<"Alice"<<endl;
  
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

