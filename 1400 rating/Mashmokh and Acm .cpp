#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define pb push_back
#define all(x) x.begin(), x.end()
#define endl '\n' 
#define F first
#define S second
#define sz(x) (int)x.size()
const int mod =1e9+7;
int dp[2005][2005];
int mash(int n ,int k , int i){
    if(k==0) return 1;
    else if(dp[i][k]!=-1){
      return dp[i][k];
    }
    int ans=0;
    for(int j=i;j<=n;j+=i){
       
            ans+=mash(n,k-1,j)%mod;
            ans = ans%mod;
        
    }
    
    return dp[i][k]=ans;
}
void solve() {
 int n,k;
 cin>>n>>k;
 memset(dp, -1, sizeof(dp));
int ans =0;
for(int i=1;i<=n;i++){
    ans+=mash(n,k-1,i)%mod;
    ans=ans%mod;
}
  cout<<ans<<endl;
}

int32_t main() {  
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    //cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
