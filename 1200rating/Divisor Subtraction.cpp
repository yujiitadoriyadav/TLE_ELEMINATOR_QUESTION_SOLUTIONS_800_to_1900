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

int f(int n){

    for(int i=3;i*i<=n;i+=2){
        if(n%i==0) return i;
    }

    return n;
}
void solve() {
 int n; cin>>n;
 
 if(n%2==0) cout<<n/2<<endl;
 else{
    int d= f(n);
    cout<<1+(n-d)/2<<endl;
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

