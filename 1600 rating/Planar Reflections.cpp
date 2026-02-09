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
const int mod = 1e9 + 7;

vector<vector<vector<int>>> dp(1001, vector<vector<int>>(1001, vector<int>(2, -1)));
int n, k;

int f(int curr, int k, int dir) {
    if(k == 1) return 1;
    if(dp[curr][k][dir] != -1) return dp[curr][k][dir];

    int ans = 2;

    if(dir == 1){
        if(curr < n){
            ans = (ans + (f(curr + 1, k, dir) - 1 + mod) % mod) % mod;
        }
        if(curr > 1){
            ans = (ans + (f(curr - 1, k - 1, 1 - dir) - 1 + mod) % mod) % mod;
        }
    } else {
        if(curr > 1){
            ans = (ans + (f(curr - 1, k, dir) - 1 + mod) % mod) % mod;
        }
        if(curr < n){
            ans = (ans + (f(curr + 1, k - 1, 1 - dir) - 1 + mod) % mod) % mod;
        }
    }

    dp[curr][k][dir] = ans % mod;
    return dp[curr][k][dir];
}

void solve() {
    cin >> n >> k;
    // Reset dp
    for(int i = 1; i <= n; ++i)
        for(int j = 1; j <= k; ++j)
            for(int d = 0; d < 2; ++d)
                dp[i][j][d] = -1;

    cout << f(1, k, 1) << endl;
}


int32_t main() {  
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
