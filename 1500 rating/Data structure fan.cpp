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
   vector<int>a(n+1),pref(n+1,0);
   for(int i=1;i<=n;i++) cin>>a[i];
 
   for(int i=1;i<=n;i++){
     pref[i]=pref[i-1]^a[i];
   }
   
   string s; cin>>s;
   int q; cin>>q;
   int ans  =0;
   for(int i=0;i<s.size();i++) {
      if(s[i]=='1') ans^=a[i+1];
   }
   while(q--){
    int op,l; cin>>op>>l;
     if(op==1){
       int r; cin>>r;
       ans^=pref[r]^pref[l-1];
     }
     if(op==2){
       cout<<(ans^(l?0:pref[n]))<<" ";
     }

     
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

