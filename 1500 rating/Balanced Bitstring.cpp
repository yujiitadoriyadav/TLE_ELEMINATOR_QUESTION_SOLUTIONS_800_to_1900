
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
const int mod =1e9+7;


void solve() {
    
    int n,k; cin>>n>>k;
    string s; cin>>s;
    int o=0,z=0,h=0;

bool flag =1;
    for(int i=0;i<n;i++){
       if(s[i]!='?' && s[i%k]!='?' && s[i]!=s[i%k]) {
         flag =0;
         break;
       }
       if(s[i]!='?') s[i%k]=s[i];
    }
    for(int i=0;i<k;i++){
      if(s[i]=='0') z++;
      if(s[i]=='1') o++;
      
    }
    if(flag && z<=k/2 && o<=k/2) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
   
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