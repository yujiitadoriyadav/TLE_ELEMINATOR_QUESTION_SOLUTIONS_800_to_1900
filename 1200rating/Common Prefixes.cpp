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
  vector<int>a(n);
  for(int i=0;i<n;i++) cin>>a[i];
  string s(200,'a');
  cout<<s<<endl;
      for(int i = 0; i < n; i++) {
        int pos = a[i];
        s[pos] = (s[pos] == 'a') ? 'b' : 'a'; 
        cout << s << endl;
    }
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

