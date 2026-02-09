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
  int n; cin>>n;
  int l=1,r=n;
  int ans;
  while(l<=r){
     int mid=(l+r)/2;
     int cnt=0;
    cout << "? 1 " << mid << endl;
     cout.flush(); 
     for(int i=1;i<=mid;i++){
        int a;cin>>a;
     
        if(a<=mid) cnt++;
     }
     if(cnt%2) r =mid-1,ans=mid;
     else l =mid+1;
  }
  cout<<"! "<<ans<<endl;
  cout.flush();
  
  

}

int32_t main() {  
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
