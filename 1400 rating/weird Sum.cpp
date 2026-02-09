#include <bits/stdc++.h>
using namespace std;

#define int long long 
#define pb push_back
#define all(x) x.begin(), x.end()
#define endl '\n' 
#define F first
#define S second
#define sz(x) (int)x.size()

vector<int>x[100005],y[100005];
void solve() {
  int n,m ; cin>>n>>m;
  
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        int a; cin>>a;
        x[a].push_back(i+1),y[a].push_back(j+1);
    }
  }
  int ans =0;
  for(int i=0;i<=100000;i++){
    sort(x[i].begin(),x[i].end());
    int sum =0;
    for(int j=0;j<x[i].size();j++){
        ans+=x[i][j]*j-sum;
        sum+=x[i][j];
    }
  }
  for(int i=0;i<=100000;i++){
    sort(y[i].begin(),y[i].end());
    int sum =0;
    for(int j=0;j<y[i].size();j++){
        ans+=y[i][j]*j-sum;
        sum+=y[i][j];
    }
  }



  cout<<ans<<endl;
  
}

int32_t main() {  
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    // cin >> t;
     while (t--) {
        solve();
     }
    return 0;
}
