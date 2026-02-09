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
  vector<int>a(n);
  for(int i=0;i<n;i++) cin>>a[i];
  vector<int>ans(n,1e9);
  map<int,vector<int>>mp;

  for(int i=0;i<n;i++){
   
    mp[a[i]].push_back(i);
  }

  for(auto &m:mp){
     vector<int>pos = m.second;
     pos.insert(pos.begin(),-1);
     pos.push_back(n);

     int maxi =0;
     for(int i=1;i<pos.size();i++){
        maxi = max(maxi , pos[i]-pos[i-1]);
     }
     if(maxi<=n){
        ans[maxi-1] =min(ans[maxi-1],m.first);
     }
     
  }
  for(int i=1;i<n;i++){
    ans[i]=min(ans[i],ans[i-1]);
  }
  for(int i=0;i<n;i++){
    if(ans[i]==1e9) cout<<-1<<" ";
    else cout<<ans[i]<<" ";
  }
  cout<<endl;
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

