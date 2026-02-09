#include <bits/stdc++.h>
using namespace std;

#define int long long 
#define pb push_back
#define all(x) x.begin(), x.end()
#define endl '\n' 
#define F first
#define S second
#define sz(x) (int)x.size()
const int mod=1e9+7;
vector<int>d(1001,1001);

void solve(){
    int n,k; cin>>n>>k;
    vector<int>b(n),c(n);
    for(int i=0;i<n;i++) cin>>b[i];
    for(int i=0;i<n;i++) cin>>c[i];
    int sum =0;
    for(int i=0;i<n;i++) sum+=d[b[i]];

    k = min(k,sum);
   vector<int>dp(k+1,0);
    for(int i=0;i<n;i++){
        int cost = d[b[i]];
        for(int j=k;j>=cost;j--){
          dp[j]=max(dp[j],dp[j-cost]+c[i]);
        }
    }
    cout<<dp[k]<<endl;
}

int32_t main() {  
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    d[1]=0;
    for(int i=1;i<1001;i++){
        for(int x=1;x<=i;x++){
            int j = i+i/x;
            if(j<1001) d[j]=min(d[j],d[i]+1);
        }
    }

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

