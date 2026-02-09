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
  int x,y,n; cin>>x>>y>>n;
  vector<int>a(n),b(n);
  unordered_map<int,int>boy,girl;
  for(int i=0;i<n;i++){
  cin>>a[i] ; 
   boy[a[i]]++;
  } 
  for(int i=0;i<n;i++) {
    cin>>b[i];
    girl[b[i]]++;
  }

   int total = n*(n-1)/2;
   int invalid=0;
  for(int i=0;i<n;i++){
    invalid +=(boy[a[i]]-1) + (girl[b[i]]-1);
  }
  invalid/=2;
  cout<<total- invalid<<endl;
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
