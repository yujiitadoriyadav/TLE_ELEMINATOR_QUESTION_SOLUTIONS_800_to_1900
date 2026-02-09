#include <bits/stdc++.h>
using namespace std;

#define int long long 
#define pb push_back
#define all(x) x.begin(), x.end()
#define endl '\n' 
#define F first
#define S second
#define sz(x) (int)x.size()

// mein bahut chutiyap tareekee se kara raha tha tip diya bhenchod 

void solve() {
  int n,k ; cin>>n>>k;
  unordered_map<int,int>mp;
  for(int i=0;i<n;i++) {
    int x; cin>>x;
    x%=k;
    if(x) mp[k-x]++;
  }

  int maxi = 0;
for (auto i = mp.begin(); i != mp.end(); i++) {
    int x = (i->second - 1LL) * k + i->first;
    maxi = max(maxi, x);
}

  if(maxi) maxi++;
  cout<<maxi<<endl;

 
}

int32_t main() {  
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
