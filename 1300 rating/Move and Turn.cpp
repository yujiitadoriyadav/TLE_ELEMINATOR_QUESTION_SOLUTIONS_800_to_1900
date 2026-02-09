#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define pb push_back
#define all(x) x.begin(), x.end()
#define F first
#define S second
#define sz(x) (int)x.size()
// halka question nahi hai 


void solve() {
    int n ; cin>>n;
   if(n==1) {
     cout<<4<<endl; 
     return ;   
   }
   if(n%2==0) cout<<(n/2+1)*(n/2+1)<<endl;
   else cout<<2*(n/2+1)*(n/2+2)<<endl;
   return;
}

int32_t main() {  
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    // int t;
    // cin >> t;
    // while (t--) {
        
    // }
    return 0;
}