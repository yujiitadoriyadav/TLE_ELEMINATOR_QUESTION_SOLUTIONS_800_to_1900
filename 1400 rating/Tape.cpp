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

void solve() {
 int n,m,k;
 cin>>n>>m>>k;
 vector<int>b(n);
 for(int i=0;i<n;i++) cin>>b[i];
 vector<int>ans;
 for(int i=1;i<n;i++){
    ans.push_back(b[i]-b[i-1]);
 }
 int res=0;
 sort(ans.begin(),ans.end());
 for(int i=0;i<n-k;i++){
    res+=ans[i];
 }
 cout<<res+k<<endl;

  
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
