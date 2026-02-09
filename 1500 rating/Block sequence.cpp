#include <bits/stdc++.h>
using namespace std;

#define int long long 
#define pb push_back
#define all(x) x.begin(), x.end()
#define endl '\n' 
#define F first
#define S second
#define sz(x) (int)x.size()
int sol(int idx , vector<int>&a,vector<int>&dp){
    int n = a.size();
    if(idx>=n) return 0;
    if(dp[idx]!=-1) return dp[idx];

    int res =INT_MAX;
    int k=a[idx];
    if(idx+k<n){
        res =min(res,sol(idx+k+1 , a,dp));
    }
    res = min(res , 1+sol(idx+1,a,dp));

    return dp[idx] =res;
}
void solve() {
   int n; cin>>n;
   vector<int>a(n);
   for(int i=0;i<n;i++) cin>>a[i];
   vector<int>dp(n+1,-1);
   cout<<sol(0,a,dp)<<endl;
  
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

