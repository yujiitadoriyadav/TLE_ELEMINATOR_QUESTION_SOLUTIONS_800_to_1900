#include <bits/stdc++.h>
using namespace std;

#define int long long 
#define pb push_back
#define all(x) x.begin(), x.end()
#define endl '\n' 
#define F first
#define S second
#define sz(x) (int)x.size()


    void solve() {
        int n ; cin>>n;
        vector<int>cnt(n+1);
      
        for(int i=0;i<n;i++) {
        int x;  cin>>x;
         ++cnt[x];
        }
        sort(cnt.rbegin(),cnt.rend());
        int ans = cnt[0];
        int last = cnt[0];
        for(int i=1;i<=n;i++){
          if(last==0) break;
          if(cnt[i]>=last){
            ans+=last-1;
            last--;
          }
          else{
            ans+=cnt[i];
            last = cnt[i];
          }
        }
        cout<<ans<<endl;
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