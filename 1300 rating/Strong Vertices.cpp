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
  int n ; cin>>n;
  vector<int>a(n),b(n);
  for(int i=0;i<n;i++) cin>>a[i];
  for(int i=0;i<n;i++) cin>>b[i];
  int maxi =INT_MIN;
  for(int i=0;i<n;i++) maxi = max(maxi,a[i]-b[i]);
  int c=0;
  for(int i=0;i<n;i++) c+=(a[i]-b[i]==maxi);
  cout<<c<<endl;
  for(int i=0;i<n;i++){
    if(a[i]-b[i]==maxi){
        cout<<i+1<<" ";
    }
  }
  cout<<endl;
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
