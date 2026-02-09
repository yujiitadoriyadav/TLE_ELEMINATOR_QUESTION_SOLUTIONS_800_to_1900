#include <bits/stdc++.h>
using namespace std;

#define int long long 
#define pb push_back
#define all(x) x.begin(), x.end()
#define endl '\n' 
#define F first
#define S second
#define sz(x) (int)x.size()
const int mod = 998244353;
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
  int n; cin>>n;
 vector<int>w(n);
 for(int i=0;i<n;i++) cin>>w[i];

 int tri =n/3;
 int ans =1;
 for(int t=0;t<tri;t++){
    int a =w[3*t],b =w[3*t+1],c=w[3*t+2];
    int mini =min({a,b,c});

    int d=0;
    if(a==mini) d++;
    if(b==mini) d++;
    if(c==mini) d++;

    ans =(ans*d)%mod;
 }

 int comb = ncr(tri,tri/2);

 int res = (ans*comb)%mod;
 cout<<res<<endl;

}

int32_t main() {  
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

