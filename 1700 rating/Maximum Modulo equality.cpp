#include <bits/stdc++.h>
using namespace std;

#define int long long 
#define pb push_back
#define all(x) x.begin(), x.end()
#define endl '\n' 
#define F first
#define S second
#define sz(x) (int)x.size()
const int mod=1e9+7;


void solve() {
  int n,q; cin>>n>>q;
  vector<int>a(n);
  for(int i=0;i<n;i++) cin>>a[i];
  
 vector<vector<int>>g(21,vector<int>(n+5)); 
 for(int i=0;i<n-1;i++){
   g[0][i] = abs(a[i+1]-a[i]);
 }

 for(int i=1;i<=20;i++){
   for(int j=0;j+(1<<i)-1<n-1;j++){
     g[i][j] = __gcd(g[i-1][j],g[i-1][j+(1<<(i-1))]);
   }
 }
  while(q--){
    int l,r; cin>>l>>r;
    l--; r-=2;
    if(l>r) cout<<0<<" ";
    else{
        int k= log2(r-l+1);
         cout<<__gcd(g[k][l],g[k][r-(1<<k)+1]);
      }
     cout<<" ";
    
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

