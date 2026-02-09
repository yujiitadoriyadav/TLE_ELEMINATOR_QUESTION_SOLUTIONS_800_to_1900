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
  int a,b,c; cin>>a>>b>>c;
  int t = a+b+c;
  if(t%3==0 && b<=t/3){
    cout<<"YES"<<endl;
  }
  else{
     cout<<"NO"<<endl;
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
