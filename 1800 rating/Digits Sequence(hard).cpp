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


void solve() {
  int k; cin>>k;
  int x =1,y=9;
  // int digit  =x*y;
  while(k>(1LL*x*y)){
    k-=x*y;
    x++;
    y=y*10;
  }

int ind = (k-1)/x;
int digitindex=(k-1)%x;
int num = (int)pow(10,x-1)+ind;
  

  // int low = 1LL*(x-1)*y/10;
  // k -=  low;

  // int num = y/9 + (k/x)-1;
  // int mod = k%x;

  string s = to_string(num);
  int ans = s[digitindex]-'0';

  cout<<ans<<endl;


  
  
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

