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


void solve() {
    int n; 
    cin >> n;       
    vector<int>b(n+1);
    for(int i=1;i<=n;i++){
        cin>>b[i];
    }
    vector<bool>dp(n+1,0);
    dp[0]=1;
    for(int i=1;i<=n;i++){
        // left 
        if(i+b[i]<=n && dp[i-1]) dp[i+b[i]]=true;
        // right
        if(i-b[i]-1>=0 && dp[i-b[i]-1]) dp[i]=true;
    }

    if(dp[n]){
        cout<<"YES"<<endl;

    }
    else cout<<"NO"<<endl;

}

int32_t main() {  
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t=1;
    cin >> t;
    while (t--) solve();
    return 0;
}
