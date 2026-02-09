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
int cnt(int k, int a, int x) {
    if (k < a) return 0;
    return 1 + (k - a) / x;
}

int f(int k ,int a,int b ,int x ,int y) {
    int ans = 0;
    int c1 = cnt(k, a, x);
    if (c1 > 0) {
        int k2 = k - c1 * x;
        ans = c1 + cnt(k2, b, y);
    }
    return ans;
}

void solve() {
    int k,a,b,x,y;
    cin >> k >> a >> b >> x >> y;
    int ans = max(f(k,a,b,x,y), f(k,b,a,y,x));
    cout << ans << "\n";
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

