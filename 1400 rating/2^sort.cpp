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
  int n,k ; cin>>n>>k;
  vector<int>a(n);
  for(int i=0;i<n;i++) cin>>a[i];

  int c=0,ans=0;
  int i =0, j=0;
  while(i<n-1 ){
    if(a[i]<2*a[i+1]){
        c++;
        if(c>=k){
            ans++;
        }

    } 
    else{
        c=0;      
    }
     i++;
  }
  cout<<ans<<endl;
  
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
