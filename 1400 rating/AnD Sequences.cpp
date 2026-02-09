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
   int n; cin>>n;
   vector<int>a(n);
   cin>>a[0];
   int andu=a[0];
   for(int i=1;i<n;i++) {
    cin>>a[i];
     andu&=a[i];
   }
   // pure ka and or mini elemnt same hoga ;; 
   int ans=0;
   int c=0;
   for(int i=0;i<n;i++){
    if(a[i]==andu){
       c++;
    }
   }
   if(c<2) cout<<0<<endl;
   else{
     ans=(1LL*c*(c-1))%mod;
     int fact =1;
     for(int i=1;i<=n-2;i++) fact = (1LL*fact*i)%mod;

     ans=(1LL*ans*fact)%mod;

    cout<<ans<<endl;
   }
   
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
