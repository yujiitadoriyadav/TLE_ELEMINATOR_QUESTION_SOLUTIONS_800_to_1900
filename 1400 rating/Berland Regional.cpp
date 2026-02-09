#include <bits/stdc++.h>
using namespace std;

#define int long long 
#define pb push_back
#define all(x) x.begin(), x.end()
#define endl '\n' 
#define F first
#define S second
#define sz(x) (int)x.size()

void solve() {
    int n;
    cin >> n;
    vector<int> u(n), s(n);
    for (int i = 0; i < n; i++) cin >> u[i];
    for (int i = 0; i < n; i++) cin >> s[i];

    unordered_map<int, vector<int>> mp;
    for (int i = 0; i < n; i++) {
        mp[u[i]].push_back(s[i]);
    }

    vector<vector<int>> groups;
    for (auto &[uni, sc] : mp) {
        sort(all(sc), greater<int>());
        for (int i = 1; i < sc.size(); i++) {
            sc[i] += sc[i - 1];
        }
        groups.pb(sc);
    }

    vector<int> ans(n + 1, 0);

    for (auto &scores : groups) {
        int sz = scores.size();
        for (int k = 1; k <= sz; k++) {
            int full = sz / k;
            ans[k] += scores[full * k - 1];
        }
    }

    for (int k = 1; k <= n; k++) {
        cout << ans[k] << " ";
    }
    cout << endl;
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
