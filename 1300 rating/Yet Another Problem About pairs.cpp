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
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    vector<pair<int, int>> ans;
    for (int i = 1; i <= n; i++) {
        if (a[i - 1] < i) {
            ans.push_back({a[i - 1], i});
        }
    }

    int m = ans.size();
    sort(all(ans));

    vector<int> starts(m);
    for (int i = 0; i < m; i++) {
        starts[i] = ans[i].F;
    }

    int res = 0;
    for (int i = 0; i < m; i++) {
        int val = ans[i].S;
        int j = upper_bound(starts.begin(), starts.end(), val) - starts.begin();
        res += m - j;
    }

    cout << res << endl;
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
