
#include <bits/stdc++.h>
using namespace std;

#define int long long 
#define pb push_back
#define all(x) x.begin(), x.end()
#define endl '\n' 
#define F first
#define S second
#define sz(x) (int)x.size()
const int mod=998244353;


void solve() {
  int n; cin>>n;
  map<int,int>mp;
  for(int i=0;i<4*n;i++){
    int x; cin>>x;
    mp[x]++;
  }
  vector<int>v;
  for(auto m:mp){
    
    if(m.S%2) {
        cout<<"NO"<<endl;
        return;
    }

    for(int i=0;i<m.S;i++) v.pb(m.F);
  }

  
  sort(all(v));
  int m=v.size();
  int area =v[0]*v[m-1];
  
  for(int i=1;i<m/2;i++){
    if((v[i]*v[m-1-i]!=area)){
        cout<<"NO"<<endl;
        return;
    }
  }
  cout<<"YES"<<endl;
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

