#include <bits/stdc++.h>
using namespace std;

#define int long long 
#define pb push_back
#define all(x) x.begin(), x.end()
#define endl '\n' 
#define F first
#define S second
#define sz(x) (int)x.size()
const int mod=1e9+7;
int powo(int a,int b){
    int res =1;
    while(b>0){
        if(b&1) res=(res*a)%mod;
        a=(a*a)%mod;
        b=b/2;
    }
    return res;
}
int inv(int x){
    return powo(x,mod-2);
}
int ncr(int n ,int r){
    int ans =1;
    for(int i=1;i<=r;i++){
        ans =(ans*((n-r+i)%mod))%mod;
        ans =(ans*inv(i))%mod;
    }
    return ans;
}

void solve() {
  int n,k; cin>>n>>k;
  vector<int>a(n);
  for(int i=0;i<n;i++) cin>>a[i];
  sort(all(a));
  int x = a[n-k];
  int total = count(all(a),x);
  int need = count(a.begin()+(n-k),a.end(),x);

  cout<<ncr(total,need)<<endl;
  
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

