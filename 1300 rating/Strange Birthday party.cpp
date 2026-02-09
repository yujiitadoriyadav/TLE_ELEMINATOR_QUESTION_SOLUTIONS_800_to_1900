#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define pb push_back
#define all(x) x.begin(), x.end()
#define F first
#define S second
#define sz(x) (int)x.size()

void solve() {
    int n,m ; cin>>n>>m;
    vector<int>k(n),c(m);
    for(int i=0;i<n;i++){
        cin>>k[i];
    }
    for(int i=0;i<m;i++){
        cin>>c[i];
    }
   sort(k.rbegin(),k.rend());
   int idx =0;  // available index 
   int cost =0;

   for(int i=0;i<n;i++){
     int ki = k[i];
     if(idx<ki && c[idx]<c[ki-1]){
        cost+=c[idx];
        idx++;
     }
     else{
        cost+=c[ki-1];
     }
   }
   cout<<cost<<endl;
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