
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
const int mod =1e9+7;


void solve() {
  int n ; cin>>n;
  vector<int>x(n),y(n);
  for(int i=0;i<n;i++) cin>>x[i]>>y[i];
  
  sort(all(x));
  sort(all(y));

  int nx,ny;
  if(n%2==1){
    nx=1;
    ny =1;
  }
  else{
     nx =x[n/2]-x[n/2-1]+1;
     ny = y[n/2] -y[n/2-1]+1;
  }
  cout<<nx*ny<<endl;
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