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
    int n; cin >> n;
    
    
    vector<int>p(n),s(n);
    for(int i=0;i<n;i++) cin>>p[i];
     for(int i=0;i<n;i++) cin>>s[i];
     bool flag =0;
    
     if(p[n-1]!=s[0]) flag =1;
     
     for(int i=0;i<n-1;i++){
        if(p[i]%p[i+1]!=0) flag =1;
        if(s[i+1]%s[i]!=0) flag=1;
        if(__gcd(p[i],s[i+1])!=p[n-1]) flag =1;
     }
   


if(flag) cout<<"NO"<<endl;
else cout<<"YES"<<endl;
  
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
