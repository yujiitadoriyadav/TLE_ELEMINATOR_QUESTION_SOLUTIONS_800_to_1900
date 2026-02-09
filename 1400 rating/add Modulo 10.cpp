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
   set<int>s;
   while(n--){
     int x; cin>>x;
     while(x%10!=0 && x%10!=2){
        x=x+x%10;
     }
     if(x%10==2) x=x%20;

     s.insert(x);
   }
   if(s.size()>1)cout<<"NO"<<endl;
   else cout<<"YES"<<endl;
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
