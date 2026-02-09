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
  string s; cin>>s;
  unordered_map<int,int>mp;
  mp[0]=1;
  vector<int>pref(n+1,0);
  for(int i=1;i<=n;i++){
    pref[i]=pref[i-1]+(s[i-1]-'0');
  }
  int ans =0;
  for(int i=1;i<=n;i++){
        ans+=mp[pref[i]-i];
    
       mp[pref[i]-i]++;
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

