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
  vector<pair<int,pair<int,int>>>v;
  for(int i=0;i<n;i++){
    int l,r,re; cin>>l>>r>>re;
    v.push_back({l,{r,re}});
  }
  sort(all(v));
  int curr =k;
  for(int i=0;i<n;i++){
    
    int l =v[i].first;
    int r =v[i].second.first;
    int re=v[i].second.second;

    if(curr>=l && curr<=r){
        curr=max(curr,re);
    }
    else continue;
  }
  cout<<curr<<endl;
 
  
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

