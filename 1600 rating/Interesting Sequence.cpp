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
int lowbit(int p){
    return p&-p;
}

void solve(){
    int n,x; cin>>n>>x;
    int i =63;
    int ans =0;
    while(i>-1){
        int l = 1ll<<i;
        if((x&l)!=(n&l) ){
            if((n&(ans+(l<<1)))!=x) ans=-1;
            else ans+=(l<<1);
            break;
        }
        ans|=(n&l);
        i--;
    }
    cout<<ans<<endl;
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

