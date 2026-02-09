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

// haad mein chhote 

void solve() {
  int n; cin>>n;
  vector<int>s(n);
  for(int i=0;i<n;i++) cin>>s[i];
  int ans =1;
  vector<int>dp(n+1,1);
  for(int i=1;i<=n;i++){
   for(int j=i*2;j<=n;j+=i){
     if(s[i-1]<s[j-1]){
        dp[j]= max(dp[j],dp[i]+1);
     }
   }
    
 }
  cout<<*max_element(dp.begin(),dp.end())<<endl;
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
