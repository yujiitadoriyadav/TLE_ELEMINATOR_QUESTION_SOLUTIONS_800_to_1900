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
  
   string s; cin>>s;
   int n = s.size();
   int o=0,t=0,th=0;
   int i=0,j=0;
   int ans =INT_MAX;
   while(i<n){
      if(s[i]=='1') o++;
      if(s[i]=='2') t++;
      if(s[i]=='3') th++;

      while(j<=i-2 && (o&&t&&th) ){
      
        ans = min(ans,i-j+1);
         if(s[j]=='1') o--;
         if(s[j]=='2') t--;
        if(s[j]=='3') th--;

        j++;
      }
      i++;
   }
   if(ans==INT_MAX) cout<<0<<endl;
   else cout<<ans<<endl;

 
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

