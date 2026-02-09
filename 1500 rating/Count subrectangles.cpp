
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
    int n,m,k; cin>>n>>m>>k;
    vector<int>a(n+1),b(m+1);
    for(int i=1;i<=n;i++) {
        cin>>a[i];
        if(a[i]) a[i]+=a[i-1];    
    }
     for(int i=1;i<=m;i++) {
        cin>>b[i];
        if(b[i]) b[i]+=b[i-1];    
    }
  int ans=0;

    for(int x=1;x<=n;x++){
        int cx=0,cy=0, y=k/x;
        if(k%x==0){
            for(int i=1;i<=n;i++) if(a[i]>=x) cx++;
             for(int i=1;i<=m;i++) if(b[i]>=y) cy++;
        }

        ans+=cx*cy;
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