#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define pb push_back
#define all(x) x.begin(), x.end()
#define endl '\n' 
#define F first
#define S second
#define sz(x) (int)x.size()

vector<int> v[100003];
int ans = 0;
string s;

pair<int, int> dfs(int x) {
    int w = 0, b = 0;
    for (auto a : v[x]) {
        auto [cw, cb] = dfs(a);
        w += cw;
        b += cb;
    }

    if (s[x - 1] == 'B') w++;
    else b++;

    if (w == b) ans++;
    return {w, b};
}

void solve() {
    int n;
    cin >> n;

   
    for (int i = 0; i <= n; i++) {
        v[i].clear();
    }

    ans = 0;

    for (int i = 1; i < n; i++) {
        int x;
        cin >> x;
        v[x].pb(i + 1);
    }

    cin >> s;

    dfs(1);
    cout << ans << endl;
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
