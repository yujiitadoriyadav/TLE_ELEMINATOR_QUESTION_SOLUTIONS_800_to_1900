#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin >> n;
    vector<int> x(n), t(n);
    for(int i = 0; i < n; i++) cin >> x[i];
    for(int i = 0; i < n; i++) cin >> t[i];

    double l = 0;
    double r = 1e8;
    double eps = 1e-7;

    while(r - l > eps) {
        double mid = (l + r) / 2.0;

        
        double max_mid = 0;
        for(int i = 0; i < n; i++) {
            max_mid = max(max_mid, t[i] + abs(x[i] - mid));
        }

       
        double mid_plus = mid + eps;
        double max_mid_plus = 0;
        for(int i = 0; i < n; i++) {
            max_mid_plus = max(max_mid_plus, t[i] + abs(x[i] - mid_plus));
        }

        if(max_mid > max_mid_plus) {
            l = mid;  
        } else {
            r = mid; 
        }
    }

    cout << fixed << setprecision(6) << (l + r) / 2.0 << endl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while(T--) solve();

    return 0;
}