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
   int n; cin>>n;
  vector<int>a(n),b(n);
 
   for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
//    vector<int>ans(n,0);
//    for(int i=0;i<n;i++){
//       for(int j=i;j>=0;j--){
//          int mini = min(a[j],b[i]);
//          ans[i]+=mini;
//          a[j]=a[j]-mini;
//       }
//    } 
//    for(int i=0;i<n;i++){
//     cout<<ans[i]<<" ";
//    }
//    cout<<endl;
      vector<int>sum(n+1);
      for(int i=0;i<n;i++) sum[i+1]=sum[i]+b[i];

      vector<int>cnt(n+1),add(n+1);
      for(int i=0;i<n;i++){
        int j = upper_bound(sum.begin(),sum.end(),a[i]+sum[i])-sum.begin()-1;
        cnt[i]+=1;
        cnt[j]-=1;
        add[j]+=a[i]-sum[j]+sum[i];
      }
      for(int i=0;i<n;i++){
        cout<<cnt[i]*b[i]+add[i]<<" ";
        cnt[i+1]+=cnt[i];
      }
      cout<<endl;
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

