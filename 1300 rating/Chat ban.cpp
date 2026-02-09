#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define pb push_back
#define all(x) x.begin(), x.end()
#define endl '\n' 
#define F first
#define S second
#define sz(x) (int)x.size()
long long get(int x) {
    return x * 1ll * (x + 1) / 2;
}

void solve() {
    int k,x; cin>>k>>x;
     int l=1,r=2*k-1;
     int res= 2*k-1;
     bool flag = false;
     while(l<=r){
        int mid = (l+r)/2;
        if(mid>=k){
            flag = (get(k)+get(k-1)-get(2*k-1-mid)>=x);
        }
        else{
            flag =(get(mid)>=x);
        }
        if(flag){
            res=mid;
            r=mid-1;
        }
        else{
            l=mid+1;
        }
     }
     cout<<res<<endl;

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