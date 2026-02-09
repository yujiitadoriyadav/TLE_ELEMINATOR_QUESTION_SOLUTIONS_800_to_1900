#include <bits/stdc++.h>
using namespace std;
const int mod =1e9+7;
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
   int ans=1;
   while(n%10==0){
     n/=10; 
     ans*=10;
   }
   while(n%5==0 && m>=2){
     n/=5; 
     m/=2;
     ans*=10;
   }
   while(n%2==0 && m>=5){
    n/=2;
    m/=5;
    ans*=10;
   }
   while(m>=10 ){
     m/=10;
     ans*=10;
   }
   ans*=n*m;
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
