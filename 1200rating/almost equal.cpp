#include <bits/stdc++.h>
using namespace std;

#define int long long 
#define pb push_back
#define all(x) x.begin(), x.end()
#define endl '\n' 
#define F first
#define S second
#define sz(x) (int)x.size()
const int mod=998244353;
// khatarnak ques

void solve() {
  int n; cin>>n;
  if(n%2==0){
 cout<<"NO"<<endl; 
 return;
  } 
   cout<<"YES"<<endl;
  for(int i=1;i<=n;i++){
    if(i%2) cout<<2*i-1<<" ";
    else cout<<2*i<<" ";
  }
   for(int i=1;i<=n;i++){
    if(i%2) cout<<2*i<<" ";
    else cout<<2*i-1<<" ";
  }


}

int32_t main() {  
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

