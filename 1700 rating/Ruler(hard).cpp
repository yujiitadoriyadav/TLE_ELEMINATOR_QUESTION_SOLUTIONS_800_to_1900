#include <bits/stdc++.h>
using namespace std;

#define int long long 
#define pb push_back
#define all(x) x.begin(), x.end()
#define endl '\n' 
#define F first
#define S second
#define sz(x) (int)x.size()
const int mod =1e7;
void solve() {
  int l=1,r=999;
  int ans=999;
  while(r-l>2){
     int a=l+(r-l)/3;
     int b=r-(r-l)/3;
     
     cout<<"? "<<a<<" "<<b<<endl;
     cout.flush();
     int x; cin>>x;
     if(x==(a+1)*(b+1)){
         r=a;
     }
     else if(x==a*b){
        l=b;
     }
     else{
        l=a,r=b;
     }
     
  }

  if(r-l==2){
      cout<<"? 1 "<<l+1<<endl;
       cout.flush();
      int x; cin>>x;
      if(x==l+1) l=l+1;
      else r=l+1;
  }
 cout<<"! "<<r<<endl;
 
  cout.flush();
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


