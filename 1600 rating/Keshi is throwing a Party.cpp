#include <bits/stdc++.h>
using namespace std;

#define int long long 
#define pb push_back
#define all(x) x.begin(), x.end()
#define endl '\n' 
#define F first
#define S second
#define sz(x) (int)x.size()
#define DEV_OP


void solve() {
  int n; cin>>n;
  vector<pair<int,int>>v(n);
  for(int i=0;i<n;i++){
    int x,y; cin>>x>>y;
    v[i]={x,y};
  }
  int l=0,r=n,ans=0;
  while(l<=r){
    int mid =l+(r-l)/2;
    int cnt=0;
    for(int i=0;i<n;i++){
        int poor = cnt;
        int rich=mid-cnt-1;
        if(v[i].first>=rich && v[i].second>=poor){
            cnt++;
        }
       
    
    }
    if(cnt>=mid){
        ans =mid;
        l =  mid+1;
    }
    else{
        r =mid-1;
    }
}
cout<<ans<<endl;
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
