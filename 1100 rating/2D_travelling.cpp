#include <bits/stdc++.h>
using namespace std;
using ll = long long;



void solve() {
	int n, k, s, t; cin >> n >> k >> s >> t;
	vector<int> x(n + 1), y(n + 1);
	for (int i = 1; i <= n; i++) cin >> x[i] >> y[i];
	ll ans = llabs(x[s] - x[t]) + llabs(y[s] - y[t]);
	ll mins = LLONG_MAX / 2, mint = LLONG_MAX / 2;
	for (int i = 1; i <= k; i++) {
		mins = min(mins, llabs(x[s] - x[i]) + llabs(y[s] - y[i]));
		mint = min(mint, llabs(x[t] - x[i]) + llabs(y[t] - y[i]));
	}
	ans = min(ans, mins + mint);
	cout << ans << '\n';
	return;
}

int main() {
	int T;
	cin >> T;
	while (T--) {
		solve();
	}
}