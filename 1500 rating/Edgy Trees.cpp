#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
const int mod = 1e9 + 7;

int modpow(int a, long long b) {
    long long base = (a % mod + mod) % mod;
    long long res = 1;
    while (b) {
        if (b & 1) res = (res * base) % mod;
        base = (base * base) % mod;
        b >>= 1;
    }
    return (int)res;
}

void dfs(int u, const vector<vector<int>>& g, vector<char>& vis, int &sz) {
    vis[u] = 1;
    sz++;
    for (int v : g[u]) {
        if (!vis[v]) dfs(v, g, vis, sz);
    }
}

void solve() {
    int n, k; 
    cin >> n >> k;

    vector<vector<int>> g(n + 1);
    for (int i = 1; i < n; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        if (w == 0) {
            g[u].pb(v);
            g[v].pb(u);
        }
    }

    int ans = modpow(n, k);               // total sequences
    vector<char> vis(n + 1, 0);

    for (int i = 1; i <= n; i++) {
        if (!vis[i]) {
            int sz = 0;
            dfs(i, g, vis, sz);           // size of this 0-edge component
            ans -= modpow(sz, k);         // subtract sequences fully inside it
            ans %= mod;
            if (ans < 0) ans += mod;      // normalize
        }
    }

    cout << ans << '\n';
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
