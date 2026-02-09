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
#define comeback

void solve() {
  int n; cin>>n;
  int val=0,penalty=0;
  int sl =INT_MAX,tl=INT_MAX;
  
  for(int i=0;i<n;i++) {
    cin>>val;
    if(sl>tl){
        swap(tl,sl);
    }
    if(val<=sl) sl=val;
    else if(val<=tl) tl=val;
    else{
        sl=val;

        penalty++;
    }
  }
  cout<<penalty<<endl;
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
