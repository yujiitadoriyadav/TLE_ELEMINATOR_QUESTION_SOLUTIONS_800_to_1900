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
  int n,m; cin>>n>>m;
  vector<int>a(n);
  m=-m;
  for(int i=0;i<n;i++){

     a[i] = 0;
     int x; cin>>x;
    while(!(x%10)) ++m,++a[i],x/=10;
    while(x) ++m,x/=10;
     
  }
  sort(all(a));
  for(int i=n-1;i>=0;i-=2) m-=a[i];
 
  if(m>0) cout<<"Sasha"<<endl;
  else cout<<"Anna"<<endl;
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
