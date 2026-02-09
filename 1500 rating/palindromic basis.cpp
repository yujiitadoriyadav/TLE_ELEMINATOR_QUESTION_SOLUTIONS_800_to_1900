
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
vector<int>dp(4*1e4,0);

void solve() {
  dp[0]=1;
  for(int i=1;i<=4*1e4;i++){
    string s = to_string(i);
    if(string(s.rbegin(),s.rend())==s){
        for(int j=i;j<=4*1e4;j++){
            dp[j]=(dp[j]+dp[j-i])%mod;
        }
    }
  }
  
}

int32_t main() {  
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    int t=1;
    cin >> t;
    while (t--) {
        int n ; cin>>n;
        cout<<dp[n]<<endl;
    }
    return 0;
}