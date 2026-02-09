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
   if(k>=n) cout<<1<<endl;
   else{
      int mini =n;
      for(int i=1;i*i<=n;i++){
        if(n%i==0){
           if(i<=k) mini = min(mini,n/i);
           if(n/i<=k){
            mini = min(mini,i);
          }
        }
        
      }
      cout<<mini<<endl;
   }

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
