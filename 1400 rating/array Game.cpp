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
   int n,k; cin>>n>>k;
   vector<int>a(n);
   for(int i=0;i<n;i++) cin>>a[i];
   if(k>2) cout<<0<<endl;
   else{
    sort(a.begin(),a.end());
    int mini=a[0];
      for(int i=1;i<n;i++){
            mini =min(mini,a[i]-a[i-1]);
        }
      if(k==1 || mini==0){
        cout<<mini<<endl;
        return;
      }
      for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            int diff = a[i]-a[j];
            int l = lower_bound(a.begin(),a.end(),diff)-a.begin();
            // lower bound ke pass check karo 
            if(l<n) mini = min(mini,abs(a[l]-diff));
            if(l>0) mini = min(mini,abs(diff-a[l-1]));
        }
      }
      cout<<mini<<endl;
   }
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
